from __future__ import annotations

import copy
import io
import re
import shutil
import tempfile
import unittest
from contextlib import redirect_stdout
from pathlib import Path
from unittest import mock

from tools import audit_examples, leetcode, prepare_environments


class BrowseRecoveryTest(unittest.TestCase):
    def setUp(self):
        self.catalog, self.progress = leetcode.load_state()
        self.specs = {}
        for path in sorted((leetcode.ROOT / 'data/environments').glob('*.json')):
            self.specs.update(leetcode.load_json(path))

    def listing(self, *options):
        args = leetcode.build_parser().parse_args(['list', *options])
        output = io.StringIO()
        with redirect_stdout(output):
            leetcode.command_list(args)
        return output.getvalue()

    def test_sections_preserve_all_occurrences_and_source_order(self):
        selected = leetcode.select_plan(self.catalog, 'lingcha-sliding-window', occurrences=True)
        output = self.listing('--plan', 'lingcha-sliding-window', '--view', 'sections')
        ids = re.findall(r'^\s*(\d+|LCP \d+|LCR \d+|面试题 \d+\.\d+)\s{2}', output, re.M)
        self.assertEqual(ids, [str(p['id']) for p in selected])
        self.assertIn('学习进度', output)
        self.assertIn('284 条分类归属，277 道不同题目', output)

    def test_order_view_and_section_filters(self):
        selected = leetcode.select_plan(self.catalog, 'hot100')
        output = self.listing('--plan', 'hot100', '--view', 'order')
        self.assertEqual(re.findall(r'^\s*(\d+)\s{2}', output, re.M), [str(p['id']) for p in selected])
        output = self.listing('--plan', 'hot100', '--view', 'sections', '--chapter', '哈希', '--free-only')
        self.assertEqual(re.findall(r'^\s*(\d+)\s{2}', output, re.M), ['1', '49', '128'])
        self.assertNotIn('会员题', output)

    def test_actual_assertion_audit_rejects_mutation_and_ignores_algorithm_edits(self):
        for key in ('704', '1'):
            problem = next(p for p in self.catalog if str(p['id']) == key)
            source = leetcode.read_text(leetcode.ROOT / problem['path'])
            spec = self.specs[key]
            self.assertEqual(audit_examples.local_errors(problem, spec, source), [])
            before, main = source.split('#ifdef LOCAL\nint main', 1)
            broken = before + '#ifdef LOCAL\nint main' + main.replace('assert(', 'assert(true || ', 1)
            self.assertTrue(audit_examples.local_errors(problem, spec, broken))
            edited = before.replace('return {};', 'return {}; // user algorithm edit') + '#ifdef LOCAL\nint main' + main
            self.assertEqual(audit_examples.local_errors(problem, spec, edited), [])
            formatted = source.replace('#ifdef LOCAL\nint main',
                                       '#ifdef LOCAL\n\n// LOCAL examples\nint  main ', 1)
            self.assertEqual(audit_examples.local_errors(problem, spec, formatted), [])
        spec = copy.deepcopy(self.specs['1'])
        spec['cases'][0]['expected'] = [1, 3]
        problem = next(p for p in self.catalog if p['id'] == 1)
        self.assertTrue(audit_examples.local_errors(problem, spec, leetcode.read_text(leetcode.ROOT / problem['path'])))
        self.assertNotEqual(audit_examples.cpp_tokens('"a b"'), audit_examples.cpp_tokens('"ab"'))

    def test_every_free_problem_has_recipe_and_corresponding_local_assertions(self):
        self.assertEqual(audit_examples.audit_local(self.catalog, self.specs), [])
        free_ids = {str(p['id']) for p in self.catalog if leetcode.is_verified_free(p)}
        self.assertEqual(set(self.specs), free_ids)

    def test_prepare_restores_missing_hot100_without_overwriting_existing_code_or_records(self):
        original_progress = leetcode.PROGRESS_PATH.read_bytes()
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            for name in ('data', 'templates'):
                shutil.copytree(leetcode.ROOT / name, root / name)
            preserved = root / self.catalog[0]['path']
            preserved.parent.mkdir(parents=True)
            preserved.write_text('// existing user solution\n')
            with mock.patch.object(leetcode, 'ROOT', root), \
                 mock.patch.object(leetcode, 'CATALOG_PATH', root / 'data/problems.json'), \
                 mock.patch.object(leetcode, 'PROGRESS_PATH', root / 'data/progress.json'), \
                 mock.patch('sys.argv', ['prepare', '--plan', 'hot100']), redirect_stdout(io.StringIO()):
                prepare_environments.main()
            self.assertEqual(preserved.read_text(), '// existing user solution\n')
            for problem in leetcode.select_plan(self.catalog, 'hot100')[1:]:
                source = (root / problem['path']).read_text()
                self.assertIn('TODO', source)
                self.assertEqual(audit_examples.local_errors(problem, self.specs[str(problem['id'])], source), [])
            self.assertEqual((root / 'data/progress.json').read_bytes(), original_progress)
        self.assertEqual(leetcode.PROGRESS_PATH.read_bytes(), original_progress)
