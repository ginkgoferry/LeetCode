#!/usr/bin/env python3
"""Import verified public Lingcha plans from locally cached source/API snapshots.

Use --scan to extract ordered references. Use --apply after the referenced
question metadata is cached. Existing solutions and learning records are kept.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import re
from pathlib import Path
from urllib.parse import urlparse, unquote

from tools import leetcode

NAMES = {
    'lingcha-sliding-window': ('滑动窗口与双指针', '滑动窗口', '03_sliding_window'),
    'lingcha-binary-search': ('二分算法', '二分查找', '11_binary_search'),
    'lingcha-monotonic-stack': ('单调栈', '栈', '12_stack'),
    'lingcha-grid': ('网格图', '网格图', '19_grid'),
    'lingcha-bitwise': ('位运算', '位运算', '20_bitwise'),
    'lingcha-graph': ('图论算法', '图论', '09_graph'),
    'lingcha-dp': ('动态规划', '动态规划', '15_dp'),
    'lingcha-data-structures': ('常用数据结构', '数据结构', '21_data_structures'),
    'lingcha-math': ('数学算法', '数学', '22_math'),
    'lingcha-greedy': ('贪心与思维', '贪心算法', '14_greedy'),
    'lingcha-tree-backtracking': ('链表、树与回溯', '树与回溯', '23_tree_backtracking'),
    'lingcha-string': ('字符串', '字符串', '24_string'),
    'lingcha-basic': ('基础算法精讲', '基础算法', '25_basic'),
}
LINK = re.compile(r'\[([^\]]+)\]\((https://leetcode\.(?:cn|com)/problems/[^\s)]+)\)')
IDENTIFIER = re.compile(r'^((?:LCP|LCR|LCS)\s*\d+|xh-\d+\.\d+|面试题\s*\d+\.\d+|\d+)\.\s*(.+)$')


def parse_source(source: dict) -> list[dict]:
    headers = {}
    supplement = ''
    lesson = ''
    video = ''
    result = []
    for line in source['content'].splitlines():
        heading = re.match(r'^(#{1,6})\s+(.+)', line)
        if heading:
            level = len(heading[1])
            headers = {k: v for k, v in headers.items() if k < level}
            headers[level] = heading[2].strip()
            supplement = ''
            if heading[2] in ('算法题单', '关联题单'):
                break
        if re.match(r'^(?:思维[扩拓]展|相似题目|进阶|练习题|练习|选做)[：:（(]', line.strip()):
            supplement = line.strip().strip('*').rstrip('：:')
        if source['id'] == 'lingcha-basic' and line.startswith('|'):
            fields = line.split('|')
            if len(fields) > 2 and fields[1].strip():
                lesson_link = re.search(r'\[([^\]]+)\]\((https://[^)]+)\)', fields[1])
                if lesson_link:
                    lesson, video = lesson_link.groups()
            section = lesson or '基础算法精讲'
        else:
            section = ' / '.join(headers[k] for k in sorted(headers) if k >= 2) or '前置知识'
            if supplement:
                section += ' / ' + supplement
        for link in LINK.finditer(line):
            label = link[1].replace('**', '').replace('`', '').strip()
            match = IDENTIFIER.match(label)
            source_id = match[1] if match else re.sub(r'题$', '', label)
            source_title = match[2] if match else label
            path = urlparse(link[2]).path
            parts = path.strip('/').split('/')
            if len(parts) != 2:
                continue  # Solutions/articles are references, not problem entries.
            identifier = leetcode.normalized_problem_id(source_id)
            tail = line[link.end():].strip().strip('|').strip()
            if source['id'] == 'lingcha-basic':
                tail = line.split('|')[-2].strip()
            elif '|' in tail:
                tail = tail.rsplit('|', 1)[-1].strip()
            rating = re.match(r'^(\d{4})\b', tail)
            entry = {
                'source_id': identifier, 'source_title': source_title,
                'slug': unquote(parts[1]), 'url': 'https://leetcode.cn/' + path.strip('/') + '/',
                'section': section, 'note': tail,
                'stage': leetcode.training_stage(section + (' / 选做' if '选做' in tail else '')),
            }
            if rating:
                entry['rating'] = int(rating[1])
            if source['id'] == 'lingcha-basic' and video:
                entry['video_url'] = video
            if not re.match(r'^\s*(?:[-*+]|\d+\.|\||——)\s*', line):
                entry['reference_only'] = True
            result.append(entry)
    if not result:
        raise leetcode.TrackerError(f"{source['id']} 没有识别到题目")
    return result


def scan_sources(directory: Path) -> list[dict]:
    plans = []
    for identifier in NAMES:
        path = directory / f'{identifier}.json'
        if not path.exists():
            continue
        source = leetcode.load_json(path)
        plans.append({**source, 'references': parse_source(source)})
    return plans


def apply_indices(plans: list[dict], cache: Path, *, allow_pending: bool = False) -> None:
    catalog, progress = leetcode.load_state()
    index = leetcode.problem_index(catalog)
    # Validate every cache reference before changing the repository.
    questions = {}
    for plan in plans:
        for entry in plan['references']:
            path = cache / f"{entry['slug']}.json"
            if not path.exists():
                if allow_pending:
                    questions[entry['slug']] = None
                    continue
                raise leetcode.TrackerError(f"尚未缓存公开元数据：{entry['slug']}")
            question = json.loads(path.read_text())
            if (not question.get('questionFrontendId') or question.get('titleSlug') != entry['slug']
                    or type(question.get('isPaidOnly')) is not bool
                    or not question.get('title')
                    or question.get('difficulty', '').upper() not in ('EASY', 'MEDIUM', 'HARD')):
                raise leetcode.TrackerError(f"缓存题号、题名、难度或会员权限不完整：{entry['slug']}")
            questions[entry['slug']] = question
    by_slug = {urlparse(p['url']).path.strip('/').split('/')[-1]: p for p in catalog}
    for source in plans:
        name, chapter, _ = NAMES[source['id']]
        items = []
        seen = set()
        references = []
        for entry in source['references']:
            question = questions[entry['slug']]
            key = leetcode.normalized_problem_id(question['questionFrontendId'] if question else entry['source_id'])
            existing = by_slug.get(entry['slug'])
            if existing:
                key = str(existing['id'])
            identifier = int(key) if key.isdigit() else key
            if key not in index:
                problem = {
                    'order': len(catalog) + 1, 'id': identifier,
                    'title': question['title'].strip() if question else '',
                    'cn_title': ((question.get('translatedTitle') if question else None) or entry['source_title']).strip(),
                    'chapter': chapter, 'difficulty': question['difficulty'].upper() if question else 'UNKNOWN',
                    'path': None, 'url': entry['url'],
                    'paid_only': bool(question['isPaidOnly']) if question else (True if '会员' in entry['note'] else None),
                    'metadata_verified': question is not None,
                    'environment_status': 'pending' if question else 'metadata_pending',
                }
                catalog.append(problem)
                index[key] = problem
                by_slug[entry['slug']] = problem
                progress['problems'][key] = leetcode.empty_record()
            if question and index[key].get('metadata_verified') is False:
                index[key].update(title=question['title'].strip(), cn_title=(question.get('translatedTitle') or entry['source_title']).strip(),
                                  difficulty=question['difficulty'].upper(), paid_only=bool(question['isPaidOnly']),
                                  metadata_verified=True, environment_status='pending')
            pair = (key, entry['section'])
            item = {'id': identifier, 'section': entry['section'], 'stage': entry['stage']}
            for field in ('note', 'rating', 'video_url', 'reference_only'):
                if entry.get(field) is not None:
                    item[field] = entry[field]
            if key != entry['source_id']:
                item['source_id'] = entry['source_id']
            if pair in seen:
                references.append(item)
                continue
            seen.add(pair)
            items.append(item)
        plan = {
            'id': source['id'], 'name': f'灵茶山艾府 · {name}',
            'source_url': source['source_url'], 'source_updated_at': source.get('updated_at'),
            'source_sha256': hashlib.sha256(source['content'].encode()).hexdigest(),
            'imported_at': '2026-10-13',
            'scope': '完整收录公开来源中的 LeetCode 题目，保留章节、顺序、前置参考和选做标记；代码按题号共用。',
            'source_reference_count': len(source['references']),
            'source_entry_count': len(items), 'source_problem_count': len({str(i['id']) for i in items}),
            'items': items,
        }
        if references:
            plan['repeated_references'] = references
        leetcode.save_json(leetcode.ROOT / 'data/plans' / f"{source['id']}.json", plan)
        print(f"{source['id']}: {len(items)} 条目，{plan['source_problem_count']} 道去重题目")
    leetcode.save_json(leetcode.CATALOG_PATH, catalog)
    progress['updated_at'] = '2026-10-13'
    leetcode.save_json(leetcode.PROGRESS_PATH, progress)
    print(f'全库：{len(catalog)} 道；已有代码和学习记录保持原样。请运行 make sync 和 make check。')


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--sources-dir', type=Path, required=True)
    parser.add_argument('--cache-dir', type=Path, required=True)
    parser.add_argument('--scan', action='store_true')
    parser.add_argument('--apply', action='store_true')
    parser.add_argument('--allow-pending', action='store_true', help='收录来源索引，缺官方元数据的题明确标为待核对')
    args = parser.parse_args()
    plans = scan_sources(args.sources_dir)
    if args.scan:
        leetcode.save_json(args.cache_dir / 'plan-references.json', [
            {k: v for k, v in plan.items() if k != 'content'} for plan in plans
        ])
        for plan in plans:
            print(plan['id'], len(plan['references']), len({e['slug'] for e in plan['references']}))
    if args.apply:
        apply_indices(plans, args.cache_dir, allow_pending=args.allow_pending)


if __name__ == '__main__':
    try:
        main()
    except leetcode.TrackerError as exc:
        raise SystemExit(f'错误：{exc}')
