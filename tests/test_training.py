from __future__ import annotations

import io
import tempfile
import unittest
from contextlib import redirect_stdout
from pathlib import Path
from types import SimpleNamespace
from unittest import mock

from tools import leetcode


class TrainingTest(unittest.TestCase):
    def setUp(self):
        self.catalog, self.progress = leetcode.load_state()
        self.plan = leetcode.select_plan(self.catalog, 'lingcha-sliding-window')

    def test_cross_plan_scores_have_provenance_and_do_not_mutate_sources(self):
        plans = leetcode.load_plans(self.catalog)
        before = __import__('json').dumps(plans, sort_keys=True)
        selected = leetcode.select_plan(self.catalog, 'lingcha-basic')
        reused = [p for p in selected if p['rating'] is not None]
        self.assertTrue(reused)
        self.assertTrue(all(p['rating_sources'] for p in reused))
        self.assertEqual(before, __import__('json').dumps(leetcode.load_plans(self.catalog), sort_keys=True))
        self.assertIn('来源：', leetcode.rating_label(reused[0]))
        self.assertTrue(leetcode.filter_problems(selected, self.progress, max_rating=2000))

    def test_conflicting_external_scores_stay_unknown(self):
        plans = {'a': {'id': 'a', 'name': 'A', 'items': [{'id': 1, 'section': 'x'}]},
                 'b': {'id': 'b', 'name': 'B', 'items': [{'id': 1, 'section': 'y', 'rating': 1200}]},
                 'c': {'id': 'c', 'name': 'C', 'items': [{'id': 1, 'section': 'z', 'rating': 1400}]}}
        with mock.patch.object(leetcode, 'load_plans', return_value=plans):
            selected = leetcode.select_plan(self.catalog, 'a')[0]
            self.assertIsNone(selected['rating'])
            self.assertTrue(selected['rating_conflict'])
            self.assertEqual(leetcode.select_plan(self.catalog, 'b')[0]['rating'], 1200)
            aggregate = leetcode.select_plan(self.catalog, 'all')[0]
            self.assertIsNone(aggregate['rating'])
            self.assertIn('来源分数不一致', leetcode.rating_label(aggregate))

    def test_score_range_is_inclusive_and_missing_is_not_zero(self):
        selected = leetcode.filter_problems(self.plan, self.progress, min_rating=1263,
                                            max_rating=1263, free_only=True)
        self.assertEqual([p['id'] for p in selected], [1456])
        selected = leetcode.filter_problems(self.plan, self.progress, max_rating=1700,
                                            stage='basic', free_only=True)
        self.assertTrue(selected)
        self.assertTrue(all(p['rating'] is not None and p['rating'] <= 1700 for p in selected))
        self.assertTrue(all(p['stage'] == 'basic' and not p.get('paid_only') for p in selected))
        self.assertNotIn(643, [p['id'] for p in selected])

    def test_explicit_missing_score_policies(self):
        included = leetcode.filter_problems(self.plan, self.progress, max_rating=1263, unrated='include')
        self.assertIn(643, [p['id'] for p in included])
        self.assertNotIn(1343, [p['id'] for p in included])
        only = leetcode.filter_problems(self.plan, self.progress, unrated='only', free_only=True)
        self.assertTrue(all(p['rating'] is None and not p.get('paid_only') for p in only))
        self.assertIn(643, [p['id'] for p in only])
        excluded = leetcode.filter_problems(self.plan, self.progress, unrated='exclude')
        self.assertTrue(all(p['rating'] is not None for p in excluded))
        self.assertEqual(len(excluded), 150)

    def test_second_section_score_is_available_in_all_views(self):
        problem = next(p for p in self.plan if p['id'] == 2273)
        self.assertEqual(problem['rating'], 1295)
        selected = leetcode.filter_problems(self.plan, self.progress, chapter='§3.5', max_rating=1300)
        self.assertIn(2273, [p['id'] for p in selected])
        selected = leetcode.filter_problems(leetcode.select_plan(self.catalog, 'all'), self.progress,
                                            query='2273', max_rating=1300)
        self.assertEqual([p['id'] for p in selected], [2273])

    def test_stage_is_bound_to_matching_section(self):
        # 438 belongs to both advanced sections in the actual plan.
        selected = leetcode.filter_problems(self.plan, self.progress, query='438', stage='basic')
        self.assertEqual(selected, [])
        selected = leetcode.filter_problems(self.plan, self.progress, query='438', stage='advanced')
        self.assertEqual([p['id'] for p in selected], [438])
        problem = dict(self.plan[0])
        problem['training_entries'] = [
            {'section': 'basic section', 'order': 9, 'stage': 'basic', 'rating': 1263},
            {'section': 'advanced section', 'order': 1, 'stage': 'advanced', 'rating': 1263},
        ]
        self.assertEqual(leetcode.filter_problems([problem], self.progress,
                         chapter='advanced', stage='basic'), [])

    def test_list_separately_reports_missing_ratings(self):
        args = leetcode.build_parser().parse_args(['list', '--plan', 'lingcha-sliding-window',
               '--query', '643', '--chapter', '§1.1', '--max-rating', '1700', '--free-only'])
        output = io.StringIO()
        with redirect_stdout(output):
            leetcode.command_list(args)
        self.assertIn('未标分题（未参与分数范围判断）', output.getvalue())
        self.assertIn('643', output.getvalue())
        self.assertNotIn('已标分题', output.getvalue())

    def test_invalid_ranges_are_rejected(self):
        for criteria in ({'min_rating': 1700, 'max_rating': 1300}, {'max_rating': 0},
                         {'unrated': 'only', 'max_rating': 1700}):
            with self.subTest(criteria=criteria), self.assertRaises(leetcode.TrackerError):
                leetcode.filter_problems(self.plan, self.progress, **criteria)

    def test_current_plan_is_persisted_and_explicit_override_wins(self):
        with tempfile.TemporaryDirectory() as tmp, mock.patch.object(leetcode, 'ROOT', Path(tmp)), \
                mock.patch.object(leetcode, 'load_state', return_value=(self.catalog, self.progress)):
            for id in ('hot100', 'lingcha-sliding-window'):
                leetcode.save_json(Path(tmp) / 'data/plans' / f'{id}.json', {
                    'id': id, 'name': id, 'items': [{'id': 1456, 'section': '基础'}],
                })
            self.assertEqual(leetcode.current_plan(self.catalog), 'hot100')
            with mock.patch('builtins.print'):
                leetcode.command_use(SimpleNamespace(plan_id='lingcha-sliding-window'))
            self.assertEqual(leetcode.current_plan(self.catalog), 'lingcha-sliding-window')
            parser = leetcode.build_parser()
            self.assertEqual(leetcode.requested_plan(parser.parse_args(['next']), self.catalog),
                             'lingcha-sliding-window')
            self.assertEqual(leetcode.requested_plan(parser.parse_args(['next', '--plan', 'hot100']),
                             self.catalog), 'hot100')
            before = (Path(tmp) / 'data/workspace.json').read_bytes()
            with self.assertRaises(leetcode.TrackerError):
                leetcode.command_use(SimpleNamespace(plan_id='bad-plan'))
            self.assertEqual((Path(tmp) / 'data/workspace.json').read_bytes(), before)
