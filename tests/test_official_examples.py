from __future__ import annotations

import json
from pathlib import Path
import tempfile
import unittest

from tools import audit_examples, cache_questions, leetcode_examples, prepare_cached_questions


class OfficialExamplesTest(unittest.TestCase):
    def test_known_public_output_label_typos_do_not_drop_examples(self):
        q = self.question('示例 1\n输入：edges = [1,0]\n输出去：2\n'
                          '示例 2\n输入：edges = [-1]\n输出：-1',
                          {'params': [{'name': 'edges'}]})
        q['questionFrontendId'] = '2360'
        self.assertEqual(len(leetcode_examples.parse(q)[1]), 2)
        q = self.question('示例 1\n输入：p = 2, q = 1\n输出：2\n'
                          '示例 2\n输入：p = 3, q = 1\n输入：1',
                          {'params': [{'name': 'p'}, {'name': 'q'}]})
        q['questionFrontendId'] = '858'
        self.assertEqual(leetcode_examples.parse(q)[1], [
            {'args': [2, 1], 'expected': 2}, {'args': [3, 1], 'expected': 1}])

    def test_named_example_without_output_is_an_error(self):
        q = self.question('示例 1\n输入：n = 1', {'params': [{'name': 'n'}]})
        with self.assertRaises(leetcode_examples.ParseError):
            leetcode_examples.parse(q)

    def test_audit_keeps_official_order_and_excludes_only_explicit_boundaries(self):
        cases = [{'args': [1], 'expected': 2}, {'args': [2], 'expected': 4}]
        self.assertTrue(audit_examples.compare_cases(cases, cases + [
            {'args': [0], 'expected': 0, 'kind': 'boundary'}]))
        self.assertFalse(audit_examples.compare_cases(cases, cases[:1]))
        self.assertFalse(audit_examples.compare_cases(cases, list(reversed(cases))))

    def test_unnamed_first_argument_followed_by_named_parameter(self):
        q = self.question('示例 1\n输入：[3,2,1], k = 2\n输出：2',
                          {'params': [{'name': 'nums'}, {'name': 'k'}]})
        self.assertEqual(leetcode_examples.parse(q)[1], [{'args': [[3,2,1], 2], 'expected': 2}])

    def test_linked_node_feedback_is_value_or_index_not_a_copied_list(self):
        q = self.question("示例 1\n输入：head = [3,2,0,-4], pos = 1\n输出：返回索引为 1 的链表节点",
                          {'params': [{'name': 'head'}, {'name': 'pos'}]})
        q['questionFrontendId'] = '142'
        self.assertEqual(leetcode_examples.parse(q)[1][0]['expected'], 1)
        q = self.question("示例 1\n输入：intersectVal = 8\n输出：Intersected at '8'",
                          {'params': [{'name': 'intersectVal'}]})
        q['questionFrontendId'] = '160'
        self.assertEqual(leetcode_examples.parse(q)[1][0]['expected'], 8)

    def question(self, content, metadata):
        return {'questionFrontendId': '9999', 'titleSlug': 'fixture',
                'translatedContent': content, 'content': '', 'metaData': json.dumps(metadata),
                'codeSnippets': [{'langSlug': 'cpp', 'code': 'class Solution { public: int f(int n) {} };'}]}

    def test_html_labels_and_control_characters(self):
        q = self.question('<p>说明：Input 不是样例</p><p>示例 1</p>'
                          '<pre>**输入：** n = 12\x08<br>**输出：** 24</pre>',
                          {'name': 'f', 'params': [{'name': 'n', 'type': 'integer'}],
                           'return': {'type': 'integer'}})
        _, cases = leetcode_examples.parse(q)
        self.assertEqual(cases, [{'args': [12], 'expected': 24}])

    def test_html_conversion_preserves_mathematical_comparisons(self):
        text = leetcode_examples.text_from_html('<p>1 <= n <= 100</p><p>a &lt; b; x >= y</p>')
        self.assertIn('1 <= n <= 100', text)
        self.assertIn('a < b; x >= y', text)

    def test_decode_preserves_quoted_strings(self):
        self.assertEqual(leetcode_examples.decode('["True", \'False\', \'x\'] explanation'),
                         ['True', 'False', 'x'])
        self.assertEqual(leetcode_examples.decode("'\\n' explanation"), '\n')
        self.assertIs(leetcode_examples.decode('True explanation'), True)

    def test_unnamed_string_array_does_not_parse_equals_inside_strings_as_arguments(self):
        q = self.question('示例 1\n输入：["a==b","b!=a"]\n输出：false',
                          {'params': [{'name': 'equations', 'type': 'string[]'}]})
        _, cases = leetcode_examples.parse(q)
        self.assertEqual(cases, [{'args': [['a==b', 'b!=a']], 'expected': False}])

    def test_design_transcript_without_colons(self):
        metadata = {'systemdesign': True}
        q = self.question('Input ["StockSpanner","next","next"]\n[[],[100],[80]]\n'
                          'Output [null,1,1]', metadata)
        _, cases = leetcode_examples.parse(q)
        self.assertEqual(cases, [{'commands': ['StockSpanner', 'next', 'next'],
                                 'args': [[], [100], [80]], 'expected': [None, 1, 1]}])

    def test_design_arguments_can_contain_python_quoted_characters(self):
        q = self.question('输入：["Encrypter","encrypt"]\n[[[\'a\',\'b\'],["ei","zf"],["ab"]],["ab"]]\n'
                          '输出：[null,"eizf"]', {'systemdesign': True})
        _, cases = leetcode_examples.parse(q)
        self.assertEqual(cases[0]['args'][0][0], ['a', 'b'])
        self.assertEqual(cases[0]['expected'], [None, 'eizf'])

    def test_master_feedback_is_a_platform_success_assertion(self):
        q = self.question('示例 1\n输入：secret = "abcdef", words = ["abcdef"], allowedGuesses = 10\n'
                          '输出：You guessed the secret word correctly.', {'params': [
                              {'name': 'secret'}, {'name': 'words'}, {'name': 'allowedGuesses'}]})
        q['questionFrontendId'] = '843'
        _, cases = leetcode_examples.parse(q)
        self.assertEqual(cases, [{'args': ['abcdef', ['abcdef'], 10], 'expected': True}])

    def test_design_transcript_rejects_missing_result(self):
        q = self.question('Input: ["A","get"]\n[[],[]]\nOutput: [null]',
                          {'systemdesign': True})
        with self.assertRaises(leetcode_examples.ParseError):
            leetcode_examples.parse(q)

    def test_c_only_size_parameter_is_removed_from_cpp_constructor(self):
        metadata = {'systemdesign': True, 'constructor': {'params': [
            {'name': 'nums', 'type': 'integer[]'},
            {'name': 'numsSize', 'type': 'integer', 'lang': 'c'}]}, 'methods': []}
        q = self.question('Input: ["NumArray"]\n[[[1,2]]]\nOutput: [null]', metadata)
        parsed, cases = leetcode_examples.parse(q)
        self.assertEqual(parsed['constructor']['params'], [{'name': 'nums', 'type': 'integer[]'}])
        self.assertEqual(cases[0]['args'], [[[1, 2]]])

    def test_legacy_design_example_uses_annotated_official_results(self):
        metadata = {'systemdesign': True, 'classname': 'MyCircularQueue',
                    'methods': [{'name': 'enQueue'}, {'name': 'Rear'}]}
        q = self.question('示例：\nMyCircularQueue q = new MyCircularQueue(3); // 设置容量\n'
                          'q.enQueue(1); // 返回 true\nq.Rear(); // 返回 1', metadata)
        _, cases = leetcode_examples.parse(q)
        self.assertEqual(cases, [{'commands': ['MyCircularQueue', 'enQueue', 'Rear'],
                                 'args': [[3], [1], []], 'expected': [None, True, 1]}])

    def test_median_window_legacy_prose_example(self):
        q = self.question('示例：给出 nums = [1,3,-1,-3,5,3,6,7]，以及 k = 3。\n'
                          '因此，返回该滑动窗口的中位数数组 [1,-1,-1,3,5,6]。',
                          {'params': [{'name': 'nums'}, {'name': 'k'}]})
        q['questionFrontendId'] = '480'
        _, cases = leetcode_examples.parse(q)
        self.assertEqual(cases, [{'args': [[1, 3, -1, -3, 5, 3, 6, 7], 3],
                                 'expected': [1, -1, -1, 3, 5, 6]}])

    def test_intersection_prose_points_and_rand10_platform_repeat(self):
        q = self.question('示例 1\n输入：line1 = {0,0}, {1,0}\nline2 = {1,1}, {0,-1}\n输出：{0.5,0}',
                          {'params': [{'name': name} for name in ('start1', 'end1', 'start2', 'end2')]})
        q['questionFrontendId'] = '面试题 16.03'
        _, cases = leetcode_examples.parse(q)
        self.assertEqual(cases, [{'args': [[0,0], [1,0], [1,1], [0,-1]], 'expected': [0.5,0]}])
        q = self.question('示例 1\n输入：2\n输出：[2,8]',
                          {'name': 'rand10', 'params': [{'name': 'n', 'type': 'integer'}], 'manual': True})
        q['questionFrontendId'] = '470'
        metadata, cases = leetcode_examples.parse(q)
        self.assertEqual(metadata['return']['type'], 'integer[]')
        self.assertEqual(cases, [{'args': [2], 'expected': [2,8]}])

    def test_examples_with_wrong_types_are_not_published(self):
        q = self.question('示例 1\n输入：n = 1\n输出："wrong"',
                          {'name': 'f', 'params': [{'name': 'n', 'type': 'integer'}],
                           'return': {'type': 'integer'}})
        with self.assertRaisesRegex(ValueError, '整数'):
            prepare_cached_questions.build_spec(q)
        with self.assertRaises(ValueError):
            prepare_cached_questions.verify_value([True], 'integer[]')

    def test_public_cache_stops_on_html_and_incomplete_permissions(self):
        for response in (b'<html>verification</html>', b'{"data":null}', b'{"data":{"question":null}}',
                         b'{"data":{"question":{"titleSlug":"fixture","questionFrontendId":"1"}}}'):
            with self.subTest(response=response), self.assertRaises(ValueError):
                cache_questions.decode_question(response, 'fixture')
        q = {'titleSlug': 'fixture', 'questionFrontendId': '1', 'isPaidOnly': True}
        self.assertEqual(cache_questions.decode_question(json.dumps({'data': {'question': q}}).encode(),
                                                        'fixture'), q)

    def test_existing_cache_and_duplicate_references_are_skipped(self):
        with tempfile.TemporaryDirectory() as tmp:
            cache = Path(tmp)
            (cache / 'a.json').write_text('{}')
            refs = [{'references': [{'slug': 'a'}, {'slug': 'b'}]},
                    {'references': [{'slug': 'b'}, {'slug': 'c'}]}]
            self.assertEqual(cache_questions.missing_slugs(refs, cache), ['b', 'c'])
