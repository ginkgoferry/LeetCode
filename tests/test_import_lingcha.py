from __future__ import annotations

import json
from pathlib import Path
import tempfile
import unittest
from unittest import mock

from tools import import_lingcha, leetcode


class ImportLingchaTest(unittest.TestCase):
    def test_sections_ratings_and_references_exclude_solution_pages(self):
        source = {'id': 'lingcha-binary-search', 'content': '''# 二分题单
## 二、二分答案
### §2.1 求最小
- [1283. 最小除数](https://leetcode.cn/problems/smallest-divisor/) 1542
选做：
- [9. 回文数](https://leetcode.cn/problems/palindrome-number/) 未标分
前置知识：[1. 两数之和](https://leetcode.cn/problems/two-sum/)
[题解](https://leetcode.cn/problems/two-sum/solutions/123/)
## 关联题单
- [2. 两数相加](https://leetcode.cn/problems/add-two-numbers/)
'''}
        entries = import_lingcha.parse_source(source)
        self.assertEqual([e['source_id'] for e in entries], ['1283', '9', '1'])
        self.assertEqual(entries[0]['rating'], 1542)
        self.assertNotIn('rating', entries[1])
        self.assertEqual(entries[1]['stage'], 'advanced')
        self.assertTrue(entries[2]['reference_only'])

    def test_basic_course_retains_video_and_homework_note(self):
        source = {'id': 'lingcha-basic', 'content': '''# 基础算法精讲
| [双指针](https://www.bilibili.com/video/BV123/) | [167. 两数之和](https://leetcode.cn/problems/two-sum-ii/) | [代码](https://github.com/EndlessCheng/codeforces-go) | *课后作业 |
'''}
        entry = import_lingcha.parse_source(source)[0]
        self.assertEqual(entry['section'], '双指针')
        self.assertEqual(entry['video_url'], 'https://www.bilibili.com/video/BV123/')
        self.assertEqual(entry['note'], '*课后作业')

    def test_book_problem_identifier_is_not_taken_from_its_title(self):
        entries = import_lingcha.parse_source({'id': 'lingcha-math', 'content':
            '- [xh-10.2. 约瑟夫环问题](https://leetcode.cn/problems/W7yuXW/)'})
        self.assertEqual(entries[0]['source_id'], 'xh-10.2')
        self.assertEqual(entries[0]['source_title'], '约瑟夫环问题')

    def test_incomplete_permission_cache_is_rejected_before_writing(self):
        with tempfile.TemporaryDirectory() as tmp:
            cache = Path(tmp)
            (cache / 'fixture.json').write_text(json.dumps({'questionFrontendId': '1',
                'title': 'One', 'titleSlug': 'fixture', 'difficulty': 'Easy'}))
            plans = [{'references': [{'slug': 'fixture'}]}]
            with mock.patch.object(leetcode, 'load_state', return_value=([], {'problems': {}})), \
                    mock.patch.object(leetcode, 'save_json') as save:
                with self.assertRaisesRegex(leetcode.TrackerError, '会员权限'):
                    import_lingcha.apply_indices(plans, cache)
                save.assert_not_called()
