#!/usr/bin/env python3
"""Prepare missing environments from cached, verified official question data.

No network access and no solution implementations. Candidate programs must pass
C++20 compilation before their path is registered. Existing files are untouched.
"""
from __future__ import annotations

import argparse
from concurrent.futures import ThreadPoolExecutor
import json
import re
import shutil
import subprocess
from pathlib import Path
from urllib.parse import urlparse

from tools import leetcode, leetcode_examples, prepare_environments, environment_validators, random_validators, special_node_environments, tree_driver_environments

CUSTOM_VALIDATORS = {'15','18','27','905','922','1471','2900','3992','2122','162','1901','2334','89','1238','1765'}
UNORDERED_BOTH = {'15','18','39','40','49','77','78','90','216'}


def verify_value(value, kind: str) -> None:
    kind = kind.replace('String', 'string')
    if kind == 'NodeIdentifier':
        if value is not None and type(value) is not int:
            raise ValueError('节点标识必须为整数或 null')
    elif kind == 'RandomListNode':
        if not isinstance(value, list):
            raise ValueError('随机链表样例必须为数组')
        for pair in value:
            if not isinstance(pair, list) or len(pair) != 2:
                raise ValueError('随机链表节点必须包含值和随机指针索引')
            verify_value(pair[0], 'integer')
            verify_value(pair[1], 'NodeIdentifier')
            if pair[1] is not None and not 0 <= pair[1] < len(value):
                raise ValueError('随机指针索引越界')
    elif kind == 'EmployeeArray':
        if not isinstance(value, list): raise ValueError('Employee 输入需要记录数组')
        for record in value:
            if not isinstance(record, list) or len(record) != 3: raise ValueError('Employee 记录缺少字段')
            verify_value(record[0], 'integer'); verify_value(record[1], 'integer'); verify_value(record[2], 'integer[]')
    elif kind.endswith('[]') or kind.startswith('list<'):
        if not isinstance(value, list):
            raise ValueError(f'样例值不是数组：{kind}')
        inner = kind[:-2] if kind.endswith('[]') else kind[5:-1]
        for item in value:
            verify_value(item, inner)
    elif kind == 'QuadTreeNode':
        if value is None: return
        if not isinstance(value, list): raise ValueError('四叉树需要序列化记录')
        for record in value:
            if record is not None and (not isinstance(record, list) or len(record) != 2 or any(type(v) is not int or v not in (0,1) for v in record)):
                raise ValueError('四叉树节点需要 isLeaf、val 两个布尔整数')
    elif kind in ('TreeNode', 'ListNode', 'NaryNode', 'NextTreeNode', 'MultilevelNode'):
        if value is None:
            return
        if not isinstance(value, list) or any(v is not None and type(v) is not int for v in value):
            raise ValueError('节点样例编码需要专用适配')
    elif kind in ('integer', 'long') and type(value) is not int:
        raise ValueError('整数样例值类型不匹配')
    elif kind == 'double' and type(value) not in (int, float):
        raise ValueError('浮点样例值类型不匹配')
    elif kind == 'boolean' and type(value) is not bool:
        raise ValueError('布尔样例值类型不匹配')
    elif kind in ('string', 'character') and (not isinstance(value, str) or (kind == 'character' and len(value) != 1)):
        raise ValueError('字符串或字符样例值类型不匹配')


def build_spec(question: dict) -> dict:
    metadata, cases = leetcode_examples.parse(question)
    identifier = leetcode.normalized_problem_id(question['questionFrontendId'])
    if identifier in ('235', '1379'):
        metadata['fixture_return'] = 'integer'  # The platform identifies a borrowed node by value.
    if identifier in special_node_environments.NARY:
        metadata['params'][0]['type'] = 'NaryNode'
    if identifier in special_node_environments.NEXT_POINTERS:
        metadata['params'][0]['type'] = 'NextTreeNode'
        metadata['return']['type'] = 'NextTreeNode'
    if identifier == '430':
        metadata['params'][0]['type'] = 'MultilevelNode'; metadata['return']['type'] = 'MultilevelNode'
    if identifier in special_node_environments.QUAD:
        metadata['return']['type'] = 'QuadTreeNode'
        if identifier == '558':
            for parameter in metadata['params']: parameter['type'] = 'QuadTreeNode'
    if identifier in tree_driver_environments.CODECS:
        metadata['classname'] = 'Codec'
        metadata['fixture_return'] = 'TreeNode'
    if identifier == '690': metadata['params'][0]['type'] = 'EmployeeArray'
    snippets = [s['code'] for s in (question.get('codeSnippets') or []) if s['langSlug'] == 'cpp']
    if not snippets:
        raise ValueError('公开接口未提供 C++ 模板')
    if metadata.get('manual') and identifier not in tree_driver_environments.SUPPORTED and identifier not in special_node_environments.SUPPORTED and identifier not in ('278','374','1095','470','1237','843','1669','2265','1110','1932','237','235','1379','863'):
        raise ValueError('平台自定义接口需要专用本地适配器')
    specs = metadata.get('methods', []) if metadata.get('systemdesign') else [metadata]
    for method in specs:
        for parameter in method.get('params', []):
            prepare_environments.cpp_type(parameter['type'])
        prepare_environments.cpp_type(method['return']['type'])
    for parameter in metadata.get('constructor', {}).get('params', []):
        prepare_environments.cpp_type(parameter['type'])
    for case in cases:
        if metadata.get('systemdesign'):
            methods = {m['name']: m for m in metadata['methods']}
            for index, (operation, values, expected) in enumerate(zip(case['commands'], case['args'], case['expected'], strict=True)):
                method = metadata['constructor'] if index == 0 else methods[operation]
                for parameter, value in zip(method['params'], values, strict=True):
                    verify_value(value, parameter['type'])
                if index and method['return']['type'] != 'void':
                    verify_value(expected, method['return']['type'])
        else:
            for parameter, value in zip(metadata['params'], case['args'], strict=True):
                verify_value(value, parameter['type'])
            kind = metadata.get('fixture_return', metadata['return']['type'])
            if identifier == '843':
                kind = 'boolean'
            elif kind == 'void':
                kind = metadata['params'][metadata['output']['paramindex']]['type']
            verify_value(case['expected'], kind)
    if identifier not in random_validators.SUPPORTED and any(m['name'] in ('getRandom', 'flip', 'randPoint', 'pick') for m in metadata.get('methods', [])):
        raise ValueError('随机结果需要性质断言，不能与某次样例输出固定比较')
    text = leetcode_examples.text_from_html(question.get('translatedContent') or question.get('content') or '')
    english_unordered = re.search(r'any\s+order', text, re.I)
    text = re.sub(r'\s+', '', text)
    ambiguous = re.search(r'返回.{0,25}(?:任意|任一|任何|其中一)|(?:多个|多种).{0,15}(?:答案|有效数组|有效安排|有效排列)', text)
    unordered = english_unordered or re.search(r'(?:任意|任何)顺序.{0,15}(?:返回|输出)|(?:返回|答案).{0,15}(?:任意|任何)顺序|顺序不限', text)
    if identifier in ('3211','2092','721','LCP 63','1110','652','863'):unordered = True
    kind = metadata.get('return', {}).get('type')
    unique_scalar = kind in ('integer','long','double','boolean') and identifier != '2334'
    # These prompts prescribe a unique output; arbitrary operation order or
    # "any parentheses/collisions" in their prose does not make answers nonunique.
    fixed_ties = identifier in ('2564','684','685','2197','2751','1190','720','LCP 5','1625','面试题 16.03','1702','899','3537')
    if ambiguous and not unordered and identifier not in tree_driver_environments.SUPPORTED and identifier not in CUSTOM_VALIDATORS and identifier not in environment_validators.SUPPORTED and identifier not in random_validators.SUPPORTED and identifier != '130' and not unique_scalar and not fixed_ties:
        raise ValueError('允许多个合法答案，需要专用性质断言')
    spec = {'cpp': snippets[0], 'metadata': metadata, 'cases': cases,
            'source_url': 'https://leetcode.cn/problems/' + question['titleSlug'] + '/'}
    if unordered and kind and (kind.endswith('[]') or kind.startswith('list<')):
        spec['unordered'] = 'both' if identifier in UNORDERED_BOTH else 'outer'
    return spec


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--cache-dir', type=Path, required=True)
    parser.add_argument('--plan', default='all')
    args = parser.parse_args()
    catalog, _ = leetcode.load_state()
    index = leetcode.problem_index(catalog)
    selected = leetcode.select_plan(catalog, args.plan)
    compiler = shutil.which('clang++') or shutil.which('g++')
    if not compiler:
        raise leetcode.TrackerError('找不到 C++ 编译器')
    template = leetcode.read_text(leetcode.ROOT / 'templates/solution.cpp')
    build = leetcode.ROOT / 'build/env-candidates'
    build.mkdir(parents=True, exist_ok=True)
    shared_path = leetcode.ROOT / 'data/environments/catalog.json'
    shared = leetcode.load_json(shared_path) if shared_path.exists() else {}
    candidates = []
    rejected = []
    for view in selected:
        problem = index[str(view['id'])]
        if problem.get('path') or not leetcode.is_verified_free(problem):
            continue
        slug = urlparse(problem['url']).path.strip('/').split('/')[-1]
        cache = args.cache_dir / (slug + '.json')
        if not cache.exists():
            problem.update(environment_status='metadata_pending', environment_note='缺少公开接口缓存，不能准备函数签名')
            continue
        try:
            question = json.loads(cache.read_text())
            spec = build_spec(question)
            source = prepare_environments.render_environment(problem, spec, template)
            path = build / (leetcode.build_key(problem['id']) + '.cpp')
            leetcode.write_text(path, source)
            candidates.append((problem, spec, source, path))
        except (ValueError, KeyError, TypeError, leetcode_examples.ParseError) as exc:
            message = str(exc)
            problem.update(environment_status='harness_pending', environment_note=message[:160])
            rejected.append((problem['id'], message))
    print(f'准备编译 {len(candidates)} 个候选环境；{len(rejected)} 个需要专用适配。', flush=True)

    def compile_candidate(candidate):
        result = subprocess.run([compiler, '-std=c++20', '-Wall', '-Wextra', '-Wshadow',
            '-Werror=return-type', '-DLOCAL', '-I' + str(leetcode.ROOT), '-fsyntax-only', str(candidate[3])],
            capture_output=True, text=True, timeout=60)
        return candidate, result

    folders = {}
    for plan in leetcode.load_plans(catalog).values():
        for item in plan['items']:
            folders.setdefault(str(item['id']), plan['id'].replace('lingcha-', ''))
    prepared = 0
    with ThreadPoolExecutor(max_workers=4) as pool:
        for number, (candidate, result) in enumerate(pool.map(compile_candidate, candidates), 1):
            problem, spec, source, _ = candidate
            if result.returncode or result.stderr:
                problem.update(environment_status='compiler_pending', environment_note=result.stderr.splitlines()[0][:180])
                rejected.append((problem['id'], result.stderr[:500]))
            else:
                slug = urlparse(problem['url']).path.strip('/').split('/')[-1]
                directory = problem['chapter']
                # Plan IDs provide a stable folder for new problems. Existing paths never change.
                folder = folders.get(str(problem['id']), 'extra')
                relative = f'cpp/26_extra/{folder}/{leetcode.build_key(problem["id"])}_{slug.replace("-", "_")}.cpp'
                destination = leetcode.ROOT / relative
                if destination.exists() and destination.read_text() != source:
                    problem.update(environment_status='harness_pending', environment_note='已有未登记文件，保留个人代码并等待核对')
                    rejected.append((problem['id'], '已有未登记文件，未覆盖'))
                    continue
                leetcode.write_text(destination, source)
                problem.update(path=relative, environment_status='prepared')
                problem.pop('environment_note', None)
                shared[str(problem['id'])] = spec
                prepared += 1
            if number % 50 == 0:
                leetcode.save_json(shared_path, shared)
                leetcode.save_json(leetcode.CATALOG_PATH, catalog)
                print(f'候选检查 {number}/{len(candidates)}，已准备 {prepared}', flush=True)
    leetcode.save_json(shared_path, shared)
    leetcode.save_json(leetcode.CATALOG_PATH, catalog)
    states = {}
    pending = []
    for problem in catalog:
        state = leetcode.environment_state(problem)
        states[state] = states.get(state, 0) + 1
        if state not in ('prepared', 'premium'):
            pending.append({'id': problem['id'], 'state': state, 'url': problem['url'],
                'reason': problem.get('environment_note') or '公开元数据与接口待核对'})
    report = {'last_batch_prepared': prepared, 'summary': states, 'pending': pending,
              'last_batch_errors': [{'id': id, 'reason': reason} for id, reason in rejected]}
    leetcode.save_json(leetcode.ROOT / 'data/environment_backlog.json', report)
    print(f'已准备 {prepared} 个环境；保留 {len(rejected)} 个待适配条目。学习记录未改动。', flush=True)
    leetcode.sync_project(catalog, leetcode.load_state()[1], write=True)


if __name__ == '__main__':
    main()
