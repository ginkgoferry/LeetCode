from __future__ import annotations

import json
import shutil
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

from tools import leetcode


class FullPlanWorkflowTest(unittest.TestCase):
    def test_every_plan_selection_and_learning_workflow_in_disposable_repository(self):
        original = leetcode.PROGRESS_PATH.read_bytes()
        catalog, _ = leetcode.load_state()
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            for name in ('cpp','common','data','notes','docs','templates','tools'):
                shutil.copytree(leetcode.ROOT / name, root / name, ignore=shutil.ignore_patterns('__pycache__'))
            for name in ('README.md','AGENTS.md','Makefile'):
                shutil.copy2(leetcode.ROOT / name, root / name)

            def run(*args):
                result = subprocess.run([sys.executable, 'tools/leetcode.py', *args], cwd=root,
                                        capture_output=True, text=True, timeout=30)
                self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
                return result.stdout

            for identifier in leetcode.load_plans(catalog):
                with self.subTest(plan=identifier):
                    before = (root / 'data/progress.json').read_bytes()
                    run('use', identifier)
                    self.assertEqual((root / 'data/progress.json').read_bytes(), before)
                    for command in ('list','next','today','stats'):
                        run(command, '--plan', identifier)
                    # Select the actual recommended problem after prior simulated records.
                    state = json.loads((root / 'data/progress.json').read_text())
                    selected = leetcode.select_plan(catalog, identifier)
                    candidate = leetcode.choose_next(selected, state, None, None, False)
                    self.assertIsNotNone(candidate)
                    problem = str(candidate['id'])
                    run('start', problem, '--date', '2026-10-13')
                    run('record', problem, 'HINT', '--confidence', '3', '--date', '2026-10-13')
                    run('reviewed', problem, '--confidence', '4', '--date', '2026-10-20')
                    run('note', problem, 'isolated plan workflow', '--date', '2026-10-20')
                    self.assertIn('isolated plan workflow', run('show', problem))
                    run('reviews', '--plan', identifier, '--date', '2026-11-03')
            run('check')
        self.assertEqual(leetcode.PROGRESS_PATH.read_bytes(), original)

    def test_record_review_and_sync_in_disposable_repository(self):
        # Real CLI commands exercise all generated views without recording fake learning.
        original = leetcode.PROGRESS_PATH.read_bytes()
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            for name in ('cpp', 'common', 'data', 'notes', 'docs', 'templates', 'tools'):
                shutil.copytree(leetcode.ROOT / name, root / name,
                                ignore=shutil.ignore_patterns('__pycache__'))
            for name in ('README.md', 'AGENTS.md', 'Makefile'):
                shutil.copy2(leetcode.ROOT / name, root / name)

            def run(*args):
                result = subprocess.run(
                    [sys.executable, 'tools/leetcode.py', *args], cwd=root,
                    capture_output=True, text=True,
                )
                self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
                return result.stdout

            def record(identifier):
                return json.loads((root / 'data/progress.json').read_text())['problems'][identifier]

            def make(*args):
                result = subprocess.run(['make', *args], cwd=root, capture_output=True, text=True)
                self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
                return result.stdout

            before_switch = (root / 'data/progress.json').read_bytes()
            self.assertIn('* 当前 hot100', make('plans'))
            make('use', 'PLAN=lingcha-sliding-window')
            self.assertEqual((root / 'data/progress.json').read_bytes(), before_switch)
            selected = make('next', 'TRAIN=basic', 'FREE=1', 'MAX_RATING=1700')
            self.assertIn('1456', selected)
            self.assertIn('1263', selected)
            self.assertIn('未标分题', selected)
            self.assertIn('283', make('next', 'PLAN=hot100'))
            self.assertIn('未标分题（未参与分数范围判断）', make(
                'list', 'QUERY=643', 'CHAPTER=§1.1', 'MAX_RATING=1700', 'FREE=1'
            ))
            self.assertIn('未标分', make('list', 'UNRATED=only', 'FREE=1', 'QUERY=643'))
            make('stats', 'TRAIN=advanced', 'FREE=1', 'MIN_RATING=1700', 'MAX_RATING=2000')

            for command in ('list', 'next', 'today', 'stats'):
                run(command, '--plan', 'lingcha-sliding-window')
            run('start', 'LCP68', '--date', '2026-10-13')
            self.assertEqual(record('LCP 68')['status'], 'DOING')
            self.assertIn('LCP 68', run('next', '--plan', 'lingcha-sliding-window'))
            for status in ('DONE', 'HINT', 'REVIEW', 'STAR'):
                run('record', 'LCP68', status, '--confidence', '3', '--minutes', '12',
                    '--note', 'isolated workflow check', '--date', '2026-10-13')
                self.assertEqual(record('LCP 68')['status'], status)
                self.assertEqual(record('LCP 68')['next_review'], '2026-10-20')
                run('check')
            run('reviewed', 'LCP 68', '--confidence', '5', '--minutes', '8', '--date', '2026-10-21')
            self.assertEqual(record('LCP 68')['next_review'], '2026-11-20')
            before = record('LCP 68')
            run('note', 'LCP 68', 'note-only event', '--date', '2026-10-21')
            after = record('LCP 68')
            for key in ('status', 'next_review', 'sessions', 'reviews', 'total_minutes'):
                self.assertEqual(after[key], before[key])
            self.assertEqual(len(after['history']), len(before['history']) + 1)
            self.assertIn('note-only event', run('show', 'LCP68'))
            self.assertIn('LCP 68', run('reviews', '--plan', 'lingcha-sliding-window', '--date', '2026-11-20'))

            run('record', '438', 'DONE', '--confidence', '4', '--date', '2026-10-13')
            self.assertIn('免费题进度：4/100', run('stats', '--plan', 'hot100'))
            self.assertIn('免费题进度：2/241', run('stats', '--plan', 'lingcha-sliding-window'))
            page = (root / 'notes/plans/lingcha-sliding-window.md').read_text()
            rows = [line for line in page.splitlines() if line.startswith('| 438 |')]
            self.assertEqual(len(rows), 2)
            self.assertTrue(all('✅ DONE' in row for row in rows))
            self.assertIn(' * - Status: DONE', (root / 'cpp/03_sliding_window/438_find_all_anagrams_in_a_string.cpp').read_text())
            run('sync')
            run('check')
            # Training filters must not hide an existing due review.
            progress_path = root / 'data/progress.json'
            progress = json.loads(progress_path.read_text())
            progress['problems']['LCP 68']['next_review'] = '2000-01-01'
            progress_path.write_text(json.dumps(progress, ensure_ascii=False))
            self.assertIn('LCP 68', make('today', 'TRAIN=advanced', 'MIN_RATING=3000', 'FREE=1'))
        self.assertEqual(leetcode.PROGRESS_PATH.read_bytes(), original)
