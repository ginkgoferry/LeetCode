from __future__ import annotations

import tempfile
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest import mock

from tools import leetcode


class PlansTest(unittest.TestCase):
    def test_generated_hub_preserves_surrounding_documentation(self):
        catalog, _ = leetcode.load_state()
        readme = 'Intro\n<!-- AUTO_PLANS:START -->\nstale\n<!-- AUTO_PLANS:END -->\nPersonal notes'
        rendered = leetcode.replace_plan_hub(readme, catalog)
        self.assertTrue(rendered.startswith('Intro\n'))
        self.assertTrue(rendered.endswith('\nPersonal notes'))
        self.assertNotIn('stale', rendered)
        self.assertIn('<!-- AUTO_PLANS:START -->\n\n|', rendered)
        table = [line for line in rendered.splitlines() if line.startswith('|')]
        self.assertTrue(table)
        self.assertTrue(all(len(line.strip('|').split('|')) == 4 for line in table))
        for identifier in leetcode.load_plans(catalog):
            self.assertIn(f'(notes/plans/{identifier}.md)', rendered)
        self.assertEqual(leetcode.replace_plan_hub(rendered, catalog), rendered)
        with self.assertRaises(leetcode.TrackerError):
            leetcode.replace_plan_hub('<!-- AUTO_PLANS:START -->', catalog)

    def setUp(self):
        self.catalog, self.progress = leetcode.load_state()

    def test_hot100_order_and_size_are_preserved(self):
        selected = leetcode.select_plan(self.catalog, 'hot100')
        self.assertEqual(len(selected), 100)
        self.assertEqual([p['id'] for p in selected], [p['id'] for p in self.catalog[:100]])

    def test_course_video_is_preserved_in_plan_and_section_filter(self):
        selected = leetcode.select_plan(self.catalog, 'lingcha-basic')
        problem = next(p for p in selected if p['id'] == 167)
        self.assertEqual(problem['video_url'], 'https://www.bilibili.com/video/BV1bP411c7oJ/')
        text = leetcode.render_progress(leetcode.select_plan(self.catalog, 'lingcha-basic', occurrences=True),
                                        self.progress)
        self.assertIn('课程视频', text)
        self.assertIn('[观看](' + problem['video_url'] + ')', text)
        # A different course for the same problem must not leak into this section.
        problem['training_entries'].append({'section': 'Other course', 'order': 999,
            'stage': 'basic', 'rating': None, 'video_url': 'https://example.org/other'})
        filtered = leetcode.filter_problems([problem], self.progress, chapter='相向双指针（一）')
        self.assertEqual([e['video_url'] for e in filtered[0]['training_entries']], [problem['video_url']])

    def test_overlapping_problem_shares_source_and_record(self):
        selected = leetcode.select_plan(self.catalog, 'lingcha-sliding-window')
        overlap = next(p for p in selected if p['id'] == 438)
        original = next(p for p in self.catalog if p['id'] == 438)
        self.assertEqual(overlap['path'], original['path'])
        self.assertNotEqual(overlap['chapter'], original['chapter'])
        leetcode.get_record(self.progress, '438')['status'] = 'DONE'
        free_count = sum(not p.get('paid_only', False) for p in selected)
        self.assertIn(f'免费题进度：1/{free_count}', leetcode.availability_summary(selected, self.progress))
        self.assertEqual(original['chapter'], '滑动窗口')

    def test_recommendation_skips_member_and_unprepared_problems(self):
        selected = leetcode.select_plan(self.catalog, 'lingcha-sliding-window')
        # Leave only a member, an unprepared free problem and the shared ready problem.
        selected = [dict(p) for p in selected if p['id'] in (1176, 1052, 438)]
        next(p for p in selected if p['id'] == 1052)['path'] = None
        self.assertEqual(leetcode.choose_next(selected, self.progress, None, None, False)['id'], 438)
        self.progress['problems']['438']['status'] = 'DONE'
        self.assertIsNone(leetcode.choose_next(selected, self.progress, None, None, False))

    def test_unknown_permissions_are_not_free_or_recommended_even_with_a_file(self):
        unknown, source_paid, free = [dict(p) for p in self.catalog[:3]]
        unknown.update(metadata_verified=True, paid_only=None)
        source_paid.update(metadata_verified=False, paid_only=True)
        free.update(metadata_verified=True, paid_only=False)
        for problem in (unknown, source_paid, free):
            self.progress['problems'][str(problem['id'])] = leetcode.empty_record()
        catalog = [unknown, source_paid, free]
        self.assertEqual([p['id'] for p in leetcode.filter_problems(catalog, self.progress, free_only=True)],
                         [free['id']])
        self.assertEqual(leetcode.choose_next(catalog, self.progress, None, None, False)['id'], free['id'])
        summary = leetcode.availability_summary(catalog, self.progress)
        self.assertIn('免费题进度：0/1', summary)
        self.assertIn('会员题进度：0/0', summary)
        self.assertIn('权限待核对：2', summary)

    def test_unknown_plan_reports_available_choices(self):
        with self.assertRaisesRegex(leetcode.TrackerError, '未知题单'):
            leetcode.select_plan(self.catalog, 'does-not-exist')

    def test_indexed_only_run_reports_reason_without_compiling(self):
        for id, reason in ((1052, '代码待准备'), (1176, '会员题')):
            catalog = [dict(p) for p in self.catalog]
            next(p for p in catalog if p['id'] == id)['path'] = None
            with self.subTest(id=id), mock.patch('subprocess.run') as run, mock.patch.object(
                leetcode, 'load_state', return_value=(catalog, self.progress)
            ):
                with self.assertRaisesRegex(leetcode.TrackerError, reason):
                    leetcode.command_run(SimpleNamespace(problem=str(id), debug=False))
                run.assert_not_called()

    def test_dangling_plan_reference_is_rejected(self):
        with tempfile.TemporaryDirectory() as tmp, mock.patch.object(leetcode, 'ROOT', Path(tmp)):
            leetcode.save_json(Path(tmp) / 'data/plans/broken.json', {
                'id': 'broken', 'name': 'Broken',
                'items': [{'id': 999999, 'section': '基础'}],
            })
            with self.assertRaisesRegex(leetcode.TrackerError, '未收录题目'):
                leetcode.select_plan(self.catalog, 'broken')

    def test_generated_index_handles_missing_code(self):
        selected = leetcode.select_plan(self.catalog, 'lingcha-sliding-window')
        next(p for p in selected if p['id'] == 1052)['path'] = None
        text = leetcode.render_progress(selected, self.progress)
        self.assertIn('🔒 会员题', text)
        self.assertIn('待准备', text)
        self.assertNotIn('(None)', text)

    def test_defaults_keep_hot100_and_all_is_available(self):
        parser = leetcode.build_parser()
        for command in ('next', 'today', 'list', 'stats'):
            args = parser.parse_args([command])
            self.assertIsNone(args.plan)
            self.assertEqual(leetcode.requested_plan(args, self.catalog), 'hot100')
        self.assertEqual(len(leetcode.select_plan(self.catalog, 'all')), len(self.catalog))

    def test_full_source_coverage_and_free_environments(self):
        plan = leetcode.load_plans(self.catalog)['lingcha-sliding-window']
        occurrences = leetcode.select_plan(self.catalog, plan['id'], occurrences=True)
        selected = leetcode.select_plan(self.catalog, plan['id'])
        self.assertEqual(len(occurrences), plan['source_entry_count'])
        self.assertEqual(len(selected), plan['source_problem_count'])
        self.assertEqual((len(occurrences), len(selected)), (284, 277))
        self.assertEqual(sum(p.get('paid_only', False) for p in selected), 36)
        self.assertTrue(all(p['path'] for p in selected if not p.get('paid_only', False)))
        self.assertEqual(len({p['section'].split(' / ')[0] for p in plan['items']}), 6)

    def test_repeat_classification_counts_progress_once(self):
        selected = leetcode.select_plan(self.catalog, 'lingcha-sliding-window')
        overlap = next(p for p in selected if p['id'] == 438)
        self.assertEqual(len(overlap['sections']), 2)
        occurrences = leetcode.select_plan(self.catalog, 'lingcha-sliding-window', occurrences=True)
        self.progress['problems']['438']['status'] = 'DONE'
        text = leetcode.render_progress(occurrences, self.progress)
        self.assertIn('总进度：1 / 277', text)
        self.assertEqual(text.count('[找到字符串中所有字母异位词]'), 2)
        self.assertEqual(len(leetcode.due_problems(selected, self.progress)), 1)

    def test_second_classification_filter_and_search_special_ids(self):
        selected = leetcode.select_plan(self.catalog, 'lingcha-sliding-window')
        filtered = leetcode.filter_problems(selected, self.progress, chapter='§2.4')
        overlap = next(p for p in filtered if p['id'] == 438)
        self.assertIn('§2.4', overlap['chapter'])
        self.assertNotIn('§1.2', overlap['chapter'])
        plan = leetcode.load_plans(self.catalog)['lingcha-sliding-window']
        expected_ids = [i['id'] for i in plan['items'] if '§2.4' in i['section']]
        self.assertEqual([p['id'] for p in filtered], expected_ids)
        for query, expected in [('lcp68', 'LCP 68'), ('LCR180', 'LCR 180'),
                                ('面试题16.06', '面试题 16.06'), ('000438', '438')]:
            self.assertEqual(str(leetcode.resolve_problem(self.catalog, query)['id']), expected)
        self.assertEqual(leetcode.build_key('LCP 68'), 'lcp_68')
        self.assertEqual(leetcode.build_key('面试题 16.06'), 'interview_16_06')

    def test_same_section_duplicate_is_rejected(self):
        with tempfile.TemporaryDirectory() as tmp, mock.patch.object(leetcode, 'ROOT', Path(tmp)):
            item = {'id': 438, 'section': '基础'}
            leetcode.save_json(Path(tmp) / 'data/plans/broken.json', {
                'id': 'broken', 'name': 'Broken', 'items': [item, item],
            })
            with self.assertRaisesRegex(leetcode.TrackerError, '同一章节存在重复'):
                leetcode.select_plan(self.catalog, 'broken')
