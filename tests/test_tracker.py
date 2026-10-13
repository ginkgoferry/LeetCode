from __future__ import annotations

import tempfile
import unittest
from datetime import date
from pathlib import Path
from types import SimpleNamespace
from unittest import mock

from tools import leetcode


class TrackerTest(unittest.TestCase):
    def test_unfinished_reset_clears_review_with_or_without_confidence(self):
        for status in ('TODO', 'DOING'):
            for confidence in (None, 2):
                with self.subTest(status=status, confidence=confidence):
                    record = leetcode.empty_record()
                    record.update(status='DONE', first_pass='2026-07-01', next_review='2026-10-20')
                    progress = {'problems': {'1': record}}
                    args = SimpleNamespace(problem='1', status=status, confidence=confidence,
                                           minutes=0, date='2026-10-13', note=None)
                    with mock.patch.object(leetcode, 'load_state', return_value=(self.catalog, progress)), \
                         mock.patch.object(leetcode, 'persist_activity'):
                        leetcode.command_record(args)
                    self.assertIsNone(record['next_review'])
                    self.assertEqual(record['first_pass'], '2026-07-01')
                    self.assertEqual(len(record['history']), 1)
                    self.assertEqual(leetcode.upcoming_reviews(self.catalog[:1], progress, '2026-10-13'), [])
                    record['next_review'] = '2026-10-20'  # Old inconsistent data stays out of the queue.
                    self.assertEqual(leetcode.upcoming_reviews(self.catalog[:1], progress, '2026-10-13'), [])

    def setUp(self) -> None:
        self.catalog = [
            {
                "order": 1,
                "id": 1,
                "title": "Two Sum",
                "cn_title": "两数之和",
                "chapter": "哈希",
                "difficulty": "EASY",
                "path": "cpp/01_hash/001_two_sum.cpp",
                "url": "https://leetcode.cn/problems/two-sum/",
            },
            {
                "order": 2,
                "id": 49,
                "title": "Group Anagrams",
                "cn_title": "字母异位词分组",
                "chapter": "哈希",
                "difficulty": "MEDIUM",
                "path": "cpp/01_hash/049_group_anagrams.cpp",
                "url": "https://leetcode.cn/problems/group-anagrams/",
            },
        ]
        self.progress = {
            "version": 1,
            "updated_at": "2026-07-31",
            "problems": {
                "1": leetcode.empty_record(),
                "49": leetcode.empty_record(),
            },
        }

    def test_blank_first_pass_does_not_capture_next_line(self) -> None:
        source = """/*
 * Problem: 1. 两数之和 / Two Sum
 * Link: https://leetcode.cn/problems/two-sum/
 * Chapter: 哈希
 * Difficulty: Easy
 *
 * Review:
 * - First pass:
 * - Status: TODO / HINT / DONE / REVIEW / STAR
 */
"""
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "solution.cpp"
            path.write_text(source, encoding="utf-8")
            metadata = leetcode.metadata_from_solution(path)
        self.assertNotIn("first_pass", metadata)
        self.assertNotIn("status", metadata)

    def test_solution_header_is_generated_from_record(self) -> None:
        source = """/*
 * Review:
 * - First pass:
 * - Status: TODO / HINT / DONE / REVIEW / STAR
 */
"""
        record = leetcode.empty_record()
        record.update(
            {
                "status": "DONE",
                "sessions": 2,
                "confidence": 4,
                "first_pass": "2026-07-01",
                "last_attempt": "2026-07-02",
                "next_review": "2026-07-16",
            }
        )
        updated = leetcode.solution_header(source, record)
        self.assertIn(" * - Confidence: 4 / 5", updated)
        self.assertIn(" * - Sessions: 2", updated)
        self.assertIn(" * - Status: DONE", updated)
        self.assertNotIn("TODO / HINT", updated)

    def test_review_interval_uses_confidence(self) -> None:
        record = leetcode.empty_record()
        leetcode.schedule_review(record, "2026-07-01", 4)
        self.assertEqual(record["next_review"], "2026-07-15")

    def test_due_queue_includes_unscheduled_hint_and_due_done(self) -> None:
        first = self.progress["problems"]["1"]
        first.update({"status": "HINT", "next_review": None})
        second = self.progress["problems"]["49"]
        second.update({"status": "DONE", "next_review": "2026-07-30"})
        due = leetcode.due_problems(self.catalog, self.progress, "2026-07-31")
        self.assertEqual([problem["id"] for problem in due], [1, 49])

    def test_report_generation_uses_persisted_date(self) -> None:
        rendered = leetcode.render_progress(self.catalog, self.progress)
        self.assertIn("截至 2026-07-31", rendered)
        if date.today().isoformat() != "2026-07-31":
            self.assertNotIn(date.today().isoformat(), rendered)

    def test_problem_resolution_accepts_padded_id_and_title(self) -> None:
        self.assertEqual(leetcode.resolve_problem(self.catalog, "001")["id"], 1)
        self.assertEqual(leetcode.resolve_problem(self.catalog, "anagrams")["id"], 49)

    def test_generated_readme_replaces_only_marked_section(self) -> None:
        source = (
            "before\n"
            f"{leetcode.README_START}\nold\n{leetcode.README_END}\n"
            "after\n"
        )
        result = leetcode.replace_generated_readme(source, "new")
        self.assertEqual(
            result,
            "before\n"
            f"{leetcode.README_START}\n\nnew\n\n{leetcode.README_END}\n"
            "after\n",
        )

    def test_record_and_review_commands_sync_all_generated_views(self) -> None:
        source = """/*
 * Problem: 1. 两数之和 / Two Sum
 * Link: https://leetcode.cn/problems/two-sum/
 * Chapter: 哈希
 * Difficulty: Easy
 *
 * Review:
 * - First pass:
 * - Status: TODO
 */
"""
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            catalog_path = root / "data" / "problems.json"
            progress_path = root / "data" / "progress.json"
            readme_path = root / "README.md"
            review_path = root / "notes" / "review.md"
            solution_path = root / self.catalog[0]["path"]
            solution_path.parent.mkdir(parents=True)
            solution_path.write_text(source, encoding="utf-8")
            catalog_path.parent.mkdir(parents=True)
            leetcode.save_json(catalog_path, [self.catalog[0]])
            leetcode.save_json(
                progress_path,
                {
                    "version": 1,
                    "updated_at": "2026-07-01",
                    "problems": {"1": leetcode.empty_record()},
                },
            )
            readme_path.write_text(
                f"# Test\n\n{leetcode.README_START}\nold\n{leetcode.README_END}\n",
                encoding="utf-8",
            )

            paths = {
                "ROOT": root,
                "CATALOG_PATH": catalog_path,
                "PROGRESS_PATH": progress_path,
                "README_PATH": readme_path,
                "REVIEW_PATH": review_path,
            }
            with mock.patch.multiple(leetcode, **paths), mock.patch("builtins.print"):
                leetcode.command_record(
                    SimpleNamespace(
                        problem="1",
                        status="DONE",
                        confidence=None,
                        minutes=25,
                        note="先查再插入",
                        date="2026-07-01",
                    )
                )
                leetcode.command_reviewed(
                    SimpleNamespace(
                        problem="1",
                        status=None,
                        confidence=5,
                        minutes=8,
                        note="一次写对",
                        date="2026-07-16",
                    )
                )

            saved = leetcode.load_json(progress_path)["problems"]["1"]
            self.assertEqual(saved["status"], "DONE")
            self.assertEqual(saved["sessions"], 2)
            self.assertEqual(saved["reviews"], 1)
            self.assertEqual(saved["total_minutes"], 33)
            self.assertEqual(saved["next_review"], "2026-08-15")
            self.assertEqual(saved["history"][0]["confidence"], 3)
            self.assertIn(" * - Confidence: 5 / 5", solution_path.read_text())
            self.assertIn("✅ DONE", readme_path.read_text())
            self.assertIn("一次写对", review_path.read_text())


if __name__ == "__main__":
    unittest.main()
