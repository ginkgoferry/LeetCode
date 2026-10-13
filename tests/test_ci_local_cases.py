import io
import shutil
import subprocess
import tempfile
import unittest
from contextlib import redirect_stdout
from pathlib import Path
from types import SimpleNamespace
from unittest import mock

from tools import ci, leetcode, local_cases


class CiLocalCasesTest(unittest.TestCase):
    def test_real_git_diff_selects_only_the_changed_problem(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            def git(*args):
                return subprocess.check_output(['git', '-c', 'user.name=Fixture', '-c',
                                                'user.email=fixture@example.invalid', *args], cwd=root,
                                               stderr=subprocess.DEVNULL).decode().strip()
            git('init')
            (root / 'cpp').mkdir()
            (root / 'cpp/one.cpp').write_text('// initial\n')
            git('add', '.')
            git('commit', '-m', 'fixture base')
            base = git('rev-parse', 'HEAD')
            (root / 'cpp/one.cpp').write_text('// changed\n')
            git('add', '.')
            git('commit', '-m', 'fixture change')
            with mock.patch.object(leetcode, 'ROOT', root):
                paths = ci.changed_paths(base)
            self.assertEqual(paths, ['cpp/one.cpp'])
            self.assertEqual(ci.select_ids([{'id': 1, 'path': 'cpp/one.cpp'},
                                            {'id': 2, 'path': 'cpp/two.cpp'}], paths)[0], ['1'])

    def test_changed_file_selection_is_conservative(self):
        catalog = [{'id': 1, 'path': 'cpp/one.cpp'}, {'id': 2, 'path': 'cpp/two.cpp'}, {'id': 3, 'path': None}]
        self.assertEqual(ci.select_ids(catalog, ['cpp/one.cpp'])[0], ['1'])
        self.assertEqual(ci.select_ids(catalog, ['README.md', 'data/progress.json'])[0], [])
        for paths in (None, ['common/leetcode.hpp'], ['tools/leetcode.py'], ['data/environments/hot100.json'],
                      ['data/local_cases/1.cpp'], ['cpp/deleted.cpp'], ['Makefile']):
            self.assertEqual(ci.select_ids(catalog, paths)[0], ['1', '2'])
        self.assertIsNone(ci.changed_paths('0'*40))
        self.assertIsNone(ci.changed_paths('no-such-ci-base'))

    def test_supplemental_case_runs_after_official_case_and_can_fail_independently(self):
        compiler = shutil.which('clang++') or shutil.which('g++')
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            problem = {'id': 1, 'path': 'cpp/one.cpp'}
            source = root / problem['path']
            source.parent.mkdir()
            source.write_text('#include <cassert>\n#include <iostream>\n'
                              'class Solution { public: int f(int n) { return n; } };\n'
                              'int main(){Solution s;assert(s.f(1)==1);return 0;}\n')
            original = source.read_bytes()
            self.assertEqual(local_cases.compile_source(root, problem), source)
            extra = local_cases.case_path(root, '1')
            extra.parent.mkdir(parents=True)
            binary = root / 'test'
            for expected, success in ((2, True), (3, False)):
                extra.write_text(f'void runExtraCases() {{ Solution s; assert(s.f(2)=={expected}); }}\n')
                wrapper = local_cases.compile_source(root, problem)
                result = subprocess.run([compiler, '-std=c++20', '-Wall', '-Wextra', '-Werror=return-type',
                                         str(wrapper), '-o', str(binary)], capture_output=True, text=True)
                self.assertEqual(result.returncode, 0, result.stderr)
                result = subprocess.run([str(binary)], cwd=root, capture_output=True, timeout=5)
                self.assertEqual(result.returncode == 0, success)
            self.assertEqual(source.read_bytes(), original)

    def test_extra_creation_is_idempotent_and_rejects_index_only_problems(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            with mock.patch.object(leetcode, 'ROOT', root), \
                 mock.patch.object(leetcode, 'load_state', return_value=([], {})), \
                 mock.patch.object(leetcode, 'resolve_problem', return_value={'id': 'LCP 68', 'path': 'cpp/a.cpp'}), \
                 redirect_stdout(io.StringIO()):
                leetcode.command_extra(SimpleNamespace(problem='LCP 68'))
                path = local_cases.case_path(root, 'LCP 68')
                path.write_text('void runExtraCases() { /* my case */ }')
                leetcode.command_extra(SimpleNamespace(problem='LCP 68'))
                self.assertIn('my case', path.read_text())
            with mock.patch.object(leetcode, 'load_state', return_value=([], {})), \
                 mock.patch.object(leetcode, 'resolve_problem', return_value={'id': 3, 'path': None}):
                with self.assertRaises(leetcode.TrackerError):
                    leetcode.command_extra(SimpleNamespace(problem='3'))

    def test_practice_runs_checks_without_recording_learning(self):
        args = leetcode.build_parser().parse_args(['practice', '1'])
        with mock.patch.object(leetcode, 'validate_state', return_value=[]), \
             mock.patch('tools.audit_examples.audit_local', return_value=[]), \
             mock.patch.object(leetcode, 'command_run') as run, \
             mock.patch.object(leetcode, 'command_check') as check, \
             mock.patch.object(leetcode, 'persist_activity') as persist, redirect_stdout(io.StringIO()):
            leetcode.command_practice(args)
            run.assert_called_once_with(args)
            check.assert_called_once()
            persist.assert_not_called()
