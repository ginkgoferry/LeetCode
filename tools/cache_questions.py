#!/usr/bin/env python3
"""Cache public LeetCode metadata, stopping on validation pages or rate limits.

Run before import_lingcha and prepare_cached_questions. No authentication,
solution code, or learning records are involved. Existing caches are preserved.
"""
from __future__ import annotations

import argparse
import json
from pathlib import Path
import time
from urllib.error import HTTPError, URLError
from urllib.request import Request, urlopen

QUERY = '''query questionData($titleSlug: String!) {
  question(titleSlug: $titleSlug) {
    questionFrontendId title translatedTitle titleSlug difficulty isPaidOnly
    content translatedContent codeSnippets { langSlug code } metaData exampleTestcases
  }
}'''


def decode_question(body: bytes, slug: str) -> dict:
    try:
        payload = json.loads(body)
    except (ValueError, UnicodeDecodeError) as exc:
        raise ValueError('公开接口返回非 JSON 页面；停止读取') from exc
    data = payload.get('data') if isinstance(payload, dict) else None
    question = data.get('question') if isinstance(data, dict) else None
    if not isinstance(question, dict) or question.get('titleSlug') != slug:
        raise ValueError('公开接口没有返回对应题目；停止读取')
    if not question.get('questionFrontendId') or type(question.get('isPaidOnly')) is not bool:
        raise ValueError('题号或会员权限缺失；停止读取')
    return question


def missing_slugs(references: list[dict], cache: Path) -> list[str]:
    slugs = dict.fromkeys(entry['slug'] for plan in references for entry in plan['references'])
    return [slug for slug in slugs if not (cache / (slug + '.json')).exists()]


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--cache-dir', type=Path, required=True)
    parser.add_argument('--limit', type=int, default=100)
    parser.add_argument('--interval', type=float, default=0.5)
    args = parser.parse_args()
    if args.limit < 1 or args.interval < 0:
        parser.error('limit 必须为正整数，interval 不能为负数')
    references = json.loads((args.cache_dir / 'plan-references.json').read_text())
    missing = missing_slugs(references, args.cache_dir)
    print(f'缺少 {len(missing)} 条公开元数据；本批最多读取 {args.limit} 条。', flush=True)
    completed = 0
    for slug in missing[:args.limit]:
        request = Request('https://leetcode.cn/graphql/',
            data=json.dumps({'query': QUERY, 'variables': {'titleSlug': slug}}).encode(),
            headers={'Content-Type': 'application/json', 'Referer': 'https://leetcode.cn/'})
        try:
            with urlopen(request, timeout=25) as response:
                question = decode_question(response.read(), slug)
        except (HTTPError, URLError, ValueError, TimeoutError) as exc:
            print(f'停止：{slug} · {exc}', flush=True)
            break
        destination = args.cache_dir / (slug + '.json')
        temporary = destination.with_suffix('.json.tmp')
        temporary.write_text(json.dumps(question, ensure_ascii=False, indent=2) + '\n')
        temporary.replace(destination)
        completed += 1
        if completed % 10 == 0:
            print(f'已缓存 {completed}/{min(args.limit, len(missing))}', flush=True)
        if completed < min(args.limit, len(missing)):
            time.sleep(args.interval)
    print(f'本批新增缓存 {completed} 条；未完成 {len(missing) - completed} 条。', flush=True)


if __name__ == '__main__':
    main()
