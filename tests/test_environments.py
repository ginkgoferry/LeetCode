from __future__ import annotations

import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest import mock

from tools import leetcode, prepare_environments, prepare_cached_questions


class EnvironmentTest(unittest.TestCase):
    def setUp(self):
        self.specs = leetcode.load_json(leetcode.ROOT / 'data/environments/lingcha-sliding-window.json')

    def test_official_spec_coverage_and_arities(self):
        catalog, _ = leetcode.load_state()
        free = [p for p in leetcode.select_plan(catalog, 'lingcha-sliding-window')
                if not p.get('paid_only', False)]
        self.assertEqual(set(self.specs), {str(p['id']) for p in free})
        for identifier, spec in self.specs.items():
            self.assertTrue(spec['cases'], identifier)
            for case in spec['cases']:
                self.assertEqual(len(case['args']), len(spec['metadata']['params']), identifier)

    def test_all_published_recipes_have_typed_official_fixtures(self):
        catalog, _ = leetcode.load_state()
        shared = leetcode.load_json(leetcode.ROOT / 'data/environments/catalog.json')
        for problem in catalog:
            if (problem.get('path') or '').startswith('cpp/26_extra/'):
                self.assertIn(str(problem['id']), shared)
        all_specs = {}
        for path in sorted((leetcode.ROOT / 'data/environments').glob('*.json')):
            all_specs.update(leetcode.load_json(path))
        for identifier, spec in all_specs.items():
            self.assertTrue(spec['cases'], identifier)
            self.assertTrue(spec['source_url'].startswith('https://leetcode.cn/problems/'), identifier)
            metadata = spec['metadata']
            for case in spec['cases']:
                if metadata.get('systemdesign'):
                    self.assertEqual(case['commands'][0], metadata['classname'], identifier)
                    self.assertEqual(len(case['commands']), len(case['args']), identifier)
                    self.assertEqual(len(case['commands']), len(case['expected']), identifier)
                    methods = {m['name']: m for m in metadata['methods']}
                    for index, operation in enumerate(case['commands']):
                        method = metadata['constructor'] if not index else methods[operation]
                        self.assertEqual(len(method['params']), len(case['args'][index]), identifier)
                        for parameter, value in zip(method['params'], case['args'][index], strict=True):
                            prepare_cached_questions.verify_value(value, parameter['type'])
                        if index and method['return']['type'] != 'void':
                            prepare_cached_questions.verify_value(case['expected'][index], method['return']['type'])
                else:
                    self.assertEqual(len(metadata['params']), len(case['args']), identifier)
                    for parameter, value in zip(metadata['params'], case['args'], strict=True):
                        prepare_cached_questions.verify_value(value, parameter['type'])
                    kind = metadata.get('fixture_return', metadata['return']['type'])
                    if identifier == '843':
                        kind = 'boolean'
                    elif kind == 'void':
                        kind = metadata['params'][metadata['output']['paramindex']]['type']
                    prepare_cached_questions.verify_value(case['expected'], kind)

    def test_prepare_preserves_existing_code_and_restores_canonical_metadata(self):
        catalog, _ = leetcode.load_state()
        problem = next(p for p in catalog if p['id'] == 1456)
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            catalog_path = root / 'data/problems.json'
            progress_path = root / 'data/progress.json'
            leetcode.save_json(catalog_path, [problem])
            leetcode.save_json(progress_path, {'problems': {'1456': leetcode.empty_record()}})
            leetcode.save_json(root / 'data/plans/lingcha-sliding-window.json', {
                'id': 'lingcha-sliding-window', 'name': 'Window',
                'items': [{'id': 1456, 'section': 'A plan-specific section'}],
            })
            leetcode.save_json(root / 'data/environments/lingcha-sliding-window.json', {'1456': self.specs['1456']})
            (root / 'templates').mkdir()
            shutil.copy2(leetcode.ROOT / 'templates/solution.cpp', root / 'templates/solution.cpp')
            source = root / problem['path']
            source.parent.mkdir(parents=True)
            source.write_text('// personal solution; preserve me\n')
            with mock.patch.multiple(leetcode, ROOT=root, CATALOG_PATH=catalog_path,
                                     PROGRESS_PATH=progress_path), mock.patch('sys.argv', ['prepare']), \
                    mock.patch('builtins.print'):
                prepare_environments.main()
                self.assertEqual(source.read_text(), '// personal solution; preserve me\n')
                source.unlink()
                prepare_environments.main()
            text = source.read_text()
            self.assertIn(' * Chapter: 滑动窗口', text)
            self.assertNotIn('A plan-specific section', text)
            self.assertIn('int maxVowels(string s, int k)', text)
            self.assertIn('额外边界用例', text)

    def test_environment_check_rejects_missing_return(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            (root / 'unfinished.cpp').write_text('int unfinished() {}\n')
            catalog = [{'id': 999, 'path': 'unfinished.cpp', 'cn_title': 'Missing return',
                        'order': 1, 'chapter': '测试'}]
            with mock.patch.object(leetcode, 'ROOT', root), mock.patch.object(
                leetcode, 'load_state', return_value=(catalog, {})
            ), mock.patch('builtins.print'):
                with self.assertRaisesRegex(leetcode.TrackerError, '编译失败'):
                    leetcode.command_skeletons(SimpleNamespace(plan='all'))

    def test_run_timeout_terminates_process_without_changing_records(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            (root / 'slow.cpp').write_text('#include <thread>\n#include <chrono>\n'
                'int main() { std::this_thread::sleep_for(std::chrono::seconds(60)); }\n')
            catalog = [{'id': 999, 'path': 'slow.cpp', 'cn_title': 'Slow fixture',
                        'title': 'Slow', 'chapter': '测试', 'order': 1}]
            progress = {'problems': {'999': leetcode.empty_record()}}
            before = repr(progress)
            with mock.patch.object(leetcode, 'ROOT', root), mock.patch.object(
                    leetcode, 'load_state', return_value=(catalog, progress)), mock.patch('builtins.print'):
                with self.assertRaisesRegex(leetcode.TrackerError, '已停止'):
                    leetcode.command_run(SimpleNamespace(problem='999', debug=False, timeout=0.1))
                self.assertEqual(repr(progress), before)
                for timeout in (0, -1, float('nan'), float('inf')):
                    with self.subTest(timeout=timeout), self.assertRaisesRegex(leetcode.TrackerError, '有限正数'):
                        leetcode.command_run(SimpleNamespace(problem='999', debug=False, timeout=timeout))

    def test_validator_accepts_alternate_answers_and_rejects_invalid_answers(self):
        compiler = shutil.which('clang++') or shutil.which('g++')
        self.assertIsNotNone(compiler)
        fixtures = {
            '905': ([2,4,1,3], [2,1,4,3]),
            '922': ([2,7,4,5], [2,4,7,5]),
            '3992': ('caba', 'aabc'),
            '2900': (['a','b'], ['e','a']),
            '2122': ([5,7,9], [2,6,10]),
            '27': (None, None),
        }
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            for identifier, (valid, invalid) in fixtures.items():
                spec = self.specs[identifier]
                case = spec['cases'][0]
                if identifier == '27':
                    # Count alone is insufficient: verify the modified prefix too.
                    body = prepare_environments.render_case(identifier, spec, case)
                    bodies = [body.replace('auto localResult = solution.removeElement(nums, val);',
                                           'nums = {2,2}; auto localResult = 2;'),
                              body.replace('auto localResult = solution.removeElement(nums, val);',
                                           'nums = {3,3}; auto localResult = 2;')]
                else:
                    body = prepare_environments.render_case(identifier, spec, case)
                    method = spec['metadata']['name']
                    arguments = ', '.join(p['name'] for p in spec['metadata']['params'])
                    call = f'auto localResult = solution.{method}({arguments});'
                    kind = spec['metadata']['return']['type']
                    bodies = [body.replace(call, f"auto localResult = {prepare_environments.cpp_type(kind)}({prepare_environments.literal(value, kind)});")
                              for value in (valid, invalid)]
                source = root / f'{identifier}.cpp'
                binary = root / identifier
                # One compiled program selects a valid or invalid candidate.
                text = '#include <algorithm>\n#include <cassert>\n#include <string>\n#include <vector>\nusing namespace std;\nint main(int argc, char**) {\nif (argc == 1) ' + bodies[0] + '\nelse ' + bodies[1] + '\n}\n'
                source.write_text(text)
                compiled = subprocess.run([compiler, '-std=c++20', str(source), '-o', str(binary)], capture_output=True, text=True)
                self.assertEqual(compiled.returncode, 0, compiled.stderr)
                for suffix, expected_success in (([], True), (['invalid'], False)):
                    result = subprocess.run([str(binary), *suffix], cwd=root, capture_output=True)
                    self.assertEqual(result.returncode == 0, expected_success, identifier)

    def test_extended_property_assertions_at_runtime(self):
        specs = leetcode.load_json(leetcode.ROOT / 'data/environments/catalog.json')
        fixtures = {
            '210': ([0, 1], [1, 0]),
            '2392': ([[0, 0, 1], [3, 0, 0], [0, 2, 0]], [[1, 0, 0], [0, 2, 0], [0, 0, 3]]),
            '1203': ([0, 7, 6, 3, 4, 1, 5, 2], list(range(8))),
            'LCR 114': ('wertf', 'ftr ew'),
            '753': ('01', '00'),
            '2097': ([[11, 9], [9, 4], [4, 5], [5, 1]], [[5, 1], [4, 5], [11, 9], [9, 4]]),
            '1042': ([4, 3, 2], [1, 1, 1]),
            '1092': ('cabac', 'abcab'),
            '368': ([3, 1], [2, 3]),
            '2901': (['bab', 'dab'], ['dab', 'cab']),
            '943': ('leetcodelovesalex', 'abcdefghijklmnopq'),
            '2732': ([1, 0], [2]),
            '2905': ([3, 0], [0, 2]),
            '1441': (['Push', 'Push', 'Pop', 'Push'], ['Push', 'Push', 'Push']),
            '1249': ('lee(t(co)de)', 'lee(t(co)de'),
            '1111': ([1, 0, 0, 0, 0, 1], [0, 0, 0, 0, 0, 0]),
            '984': ('bab', 'bbb'),
            '767': ('aba', 'aab'),
            '1054': ([1, 2, 1, 2, 1, 2], [1, 1, 1, 2, 2, 2]),
            '1405': ('ccbccacc', 'ccccccab'),
            '1488': ([-1, -1, 1, 2, -1, -1], [-1, -1, 1, 1, -1, -1]),
            '1317': ([4, 7], [1, 10]),
            '1968': ([3, 5, 4, 2, 1], [1, 2, 3, 4, 5]),
            '3680': (list(reversed(specs['3680']['cases'][1]['expected'])),
                     [specs['3680']['cases'][1]['expected'][0]] * 20),
            '2099': ([4, 3], [3, 3]),
            '870': ([2, 11, 7, 15], [2, 7, 11, 15]),
            '166': ('0.0(120)', '0.(120)'),
            '3311': ([[0,1],[2,3]], [[0,1],[3,2]]),
            '1304': ([-2,-1,0,1,2], [-2,-1,0,1,3]),
            '3963': (['...','##.'], ['...','...']),
            '3988': (['..#','...'], ['...','...']),
            '942': ([1,4,0,3,2], [0,1,2,3,4]),
            '1253': ([[1,0,1],[0,1,0]], [[1,1,1],[0,0,0]]),
            '969': ([3,4,2,3,2], [4]),
            '1605': ([[1,2],[3,5]], [[3,0],[2,6]]),
            '667': ([3,2,1], [1,3,2]),
            '1980': ('00', '01'),
            '932': ([3,4,1,2], [1,2,3,4]),
            '1982': ([-1,-2,3], [1,2,3]),
        }
        compiler = shutil.which('clang++') or shutil.which('g++')
        self.assertIsNotNone(compiler)
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            for identifier, candidates in fixtures.items():
                spec = specs[identifier]
                index = 2 if identifier in ('2099', '166') else (1 if identifier in ('1488', '1317', '3680') else 0)
                case = spec['cases'][index]
                body = prepare_environments.render_case(identifier, spec, case)
                metadata = spec['metadata']
                arguments = ', '.join(p['name'] for p in metadata['params'])
                call = f"auto localResult = solution.{metadata['name']}({arguments});"
                self.assertIn(call, body)
                kind = metadata['return']['type']
                bodies = [body.replace(call, f'auto localResult = {prepare_environments.cpp_type(kind)}('
                          f'{prepare_environments.literal(value, kind)});') for value in candidates]
                source, binary = root / 'fixture.cpp', root / 'fixture'
                source.write_text('#include "common/leetcode.hpp"\n#include <map>\n#include <set>\n#include <numeric>\nusing namespace std;\n'
                                  'int main(int argc, char**) { if (argc == 1) ' + bodies[0] +
                                  '\nelse ' + bodies[1] + '\n}\n')
                result = subprocess.run([compiler, '-std=c++20', '-I' + str(leetcode.ROOT),
                                         str(source), '-o', str(binary)], capture_output=True, text=True)
                self.assertEqual(result.returncode, 0, result.stderr)
                for suffix, valid in (([], True), (['invalid'], False)):
                    result = subprocess.run([str(binary), *suffix], cwd=root, capture_output=True)
                    self.assertEqual(result.returncode == 0, valid, identifier)
