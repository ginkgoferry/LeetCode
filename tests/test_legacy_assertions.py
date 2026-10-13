"""Exercise real legacy LOCAL mains with fixture replies, never user solutions."""
import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

from tools import leetcode


class LegacyAssertionsTest(unittest.TestCase):
    def test_actual_hot100_assertions_accept_alternatives_and_reject_wrong_identity(self):
        specs = {}
        for path in (leetcode.ROOT / 'data/environments').glob('*.json'):
            specs.update(leetcode.load_json(path))
        fixtures = {
            '142': ('ListNode* detectCycle(ListNode* head)',
                    'int positions[3]={1,0,-1}; int pos=positions[index++]; return pos<0?nullptr:getNodeAt(head,pos);',
                    'return new ListNode(2);'),
            '160': ('ListNode* getIntersectionNode(ListNode* headA, ListNode*)',
                    'int offsets[3]={2,3,-1}; int offset=offsets[index++]; return offset<0?nullptr:getNodeAt(headA,offset);',
                    'return new ListNode(8);'),
            '236': ('TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode*, TreeNode*)',
                    'int values[3]={3,5,1}; return findTreeNode(root,values[index++]);',
                    'return new TreeNode(3);'),
            '108': ('TreeNode* sortedArrayToBST(vector<int>&)',
                    'if(index++==0) return buildTree(vector<optional<int>>{-3,-10,5,nullopt,nullopt,0,9}); return buildTree(vector<optional<int>>{3,1});',
                    'return buildTree(vector<optional<int>>{-10,nullopt,-3,nullopt,0,nullopt,5,nullopt,9});'),
            '5': ('string longestPalindrome(string)',
                  'return index++==0?"aba":"bb";', 'return "babad";'),
            '138': ('Node* copyRandomList(Node* head)',
                    'return buildRandomList(randomListToVector(head));', 'return head;'),
        }
        compiler = shutil.which('clang++') or shutil.which('g++')
        self.assertIsNotNone(compiler)
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            for key, (signature, valid, invalid) in fixtures.items():
                with self.subTest(problem=key):
                    source, binary = root / f'{key}.cpp', root / key
                    source.write_text('#include <iostream>\n#include <cstdlib>\n#include "common/leetcode.hpp"\n'
                                      'class Solution { int index=0; public: bool wrong; Solution():wrong(getenv("INVALID_FIXTURE")!=nullptr){} '
                                      + signature + ' { if(wrong) {' + invalid + '} ' + valid + '} };\n'
                                      + specs[key]['local_test_source'])
                    result = subprocess.run([compiler, '-std=c++20', '-DLOCAL', '-I'+str(leetcode.ROOT),
                                             str(source), '-o', str(binary)], capture_output=True, text=True)
                    self.assertEqual(result.returncode, 0, result.stderr)
                    import os
                    env = dict(os.environ)
                    env.pop('INVALID_FIXTURE', None)
                    for wrong in (False, True):
                        if wrong:
                            env['INVALID_FIXTURE'] = '1'
                        result = subprocess.run([str(binary)], cwd=root, env=env, capture_output=True, timeout=5)
                        self.assertEqual(result.returncode == 0, not wrong, result.stderr)
