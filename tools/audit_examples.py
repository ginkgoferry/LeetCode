"""Compare checked-in official fixtures against cached public descriptions.

This audits fixture data and its correspondence to actual LOCAL assertions,
not whether an unfinished algorithm is correct.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import re
from pathlib import Path

from tools import leetcode, leetcode_examples, prepare_environments


def compare_cases(expected: list[dict], actual: list[dict]) -> bool:
    return expected == [case for case in actual if case.get('kind') != 'boundary']


def cpp_tokens(source: str) -> str:
    """Ignore formatting/comments while preserving strings and token boundaries."""
    pattern = r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|//[^\n]*|/\*[\s\S]*?\*/|[A-Za-z_]\w*|\d+(?:\.\d+)?|[^\s]'
    return '\0'.join(token for token in re.findall(pattern, source)
                     if not token.startswith(('//', '/*')))


def local_errors(problem: dict, spec: dict, source: str) -> list[str]:
    """Check actual LOCAL assertions, without executing unfinished algorithms."""
    main = re.search(r'^[ \t]*#[ \t]*ifdef[ \t]+LOCAL[ \t]*\r?\n'
                     r'(?:\s|//[^\n]*\n|/\*[\s\S]*?\*/)*int\s+main\s*\(', source, re.M)
    if main is None:
        return ['missing LOCAL main']
    local_source = source[main.start():]
    actual = cpp_tokens(local_source)
    if 'local_test_source' in spec:
        digest = hashlib.sha256(json.dumps(spec['cases'], ensure_ascii=False, sort_keys=True).encode()).hexdigest()
        if digest != spec.get('local_fixture_sha256'):
            return ['旧题示例数据已修改，需重新核对对应 LOCAL 断言并更新配方摘要']
        if actual == cpp_tokens(spec['local_test_source']):
            return []
        expected_blocks = re.findall(r'^    \{\n.*?^    \}', spec['local_test_source'], re.M | re.S)
        actual_blocks = re.findall(r'^    \{\n.*?^    \}', local_source, re.M | re.S)
        if len(expected_blocks) == len(actual_blocks):
            for index, (expected, observed) in enumerate(zip(expected_blocks, actual_blocks), 1):
                if cpp_tokens(expected) != cpp_tokens(observed):
                    return [f'本地用例 #{index} 的断言或输入已修改，需核对官方示例与配方']
        return ['旧题 LOCAL 用例缺失或发生结构变化，需核对官方示例与配方']
    cursor = 0
    errors = []
    for index, case in enumerate(spec['cases'], 1):
        render = (prepare_environments.render_design_case if spec['metadata'].get('systemdesign')
                  else prepare_environments.render_case)
        snippet = (render(spec, case, str(problem['id'])) if spec['metadata'].get('systemdesign')
                   else render(str(problem['id']), spec, case))
        expected = cpp_tokens(snippet)
        offset = actual.find(expected, cursor)
        if offset < 0:
            label = '补充边界' if case.get('kind') == 'boundary' else '官方示例'
            inputs = json.dumps(case.get('args'), ensure_ascii=False)[:160]
            errors.append(f'{label} #{index} 缺失、顺序变化或断言已修改；输入：{inputs}')
        else:
            cursor = offset + len(expected)
    return errors


def audit_local(catalog: list[dict], specs: dict) -> list[dict]:
    errors = []
    recipes = {}
    for path in sorted((leetcode.ROOT / 'data/environments').glob('*.json')):
        for key in leetcode.load_json(path):
            recipes[key] = str(path.relative_to(leetcode.ROOT))
    for problem in catalog:
        if not problem.get('path'):
            continue
        key = str(problem['id'])
        if key not in specs:
            errors.append({'id': key, 'error': 'missing environment recipe'})
            continue
        try:
            for error in local_errors(problem, specs[key], leetcode.read_text(leetcode.ROOT / problem['path'])):
                errors.append({'id': key, 'error': error, 'file': problem['path'],
                               'recipe': recipes.get(key, 'data/environments'),
                               'action': '核对题面，恢复误改的官方断言；有意修改时同步配方。个人用例请使用 make extra ID="'+key+'"'})
        except (OSError, ValueError, KeyError) as exc:
            errors.append({'id': key, 'error': str(exc)})
    return errors


def audit(cache: Path) -> dict:
    catalog, _ = leetcode.load_state()
    specs = {}
    for path in sorted((leetcode.ROOT / 'data/environments').glob('*.json')):
        specs.update(leetcode.load_json(path))
    result = {'matched': 0, 'legacy_matched': 0, 'official_cases': 0,
              'legacy_without_recipe': [], 'errors': []}
    for problem in catalog:
        if not problem.get('path'):
            continue
        identifier = str(problem['id'])
        slug = problem['url'].rstrip('/').split('/')[-1]
        try:
            question = json.loads((cache / f'{slug}.json').read_text())
            if leetcode.normalized_problem_id(question['questionFrontendId']) != identifier:
                raise ValueError('cached problem ID does not match catalog')
            _, expected = leetcode_examples.parse(question)
            result['official_cases'] += len(expected)
            if identifier not in specs:
                result['legacy_without_recipe'].append(identifier)
                raise ValueError('missing environment recipe')
            elif not compare_cases(expected, specs[identifier]['cases']):
                raise ValueError('official fixture data differs from description')
            else:
                result['matched'] += 1
                if 'local_test_source' in specs[identifier]:
                    result['legacy_matched'] += 1
        except (OSError, ValueError, KeyError, leetcode_examples.ParseError) as exc:
            result['errors'].append({'id': identifier, 'error': str(exc)})
    result['local_errors'] = audit_local(catalog, specs)
    return result


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--cache-dir', type=Path, required=True)
    args = parser.parse_args()
    result = audit(args.cache_dir)
    print(json.dumps(result, ensure_ascii=False, indent=2))
    raise SystemExit(bool(result['errors'] or result['local_errors']))


if __name__ == '__main__':
    main()
