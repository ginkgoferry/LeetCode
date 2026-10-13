from __future__ import annotations

import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

from tools import leetcode, prepare_environments, special_node_environments

PREFIX = '#include "common/leetcode.hpp"\n#include <set>\n#include <functional>\n#include <climits>\n#include <numeric>\n'


class TreeEnvironmentTest(unittest.TestCase):
    def run_candidates(self, prefix, valid, invalid):
        compiler = shutil.which('clang++') or shutil.which('g++')
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp); source, binary = root/'fixture.cpp', root/'fixture'
            source.write_text(prefix + '\nint main(int argc,char**) { if (argc == 1) ' + valid + '\nelse ' + invalid + '\n}\n')
            result = subprocess.run([compiler, '-std=c++20', '-I'+str(leetcode.ROOT), str(source), '-o', str(binary)], capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)
            for suffix, expected in (([], True), (['invalid'], False)):
                result = subprocess.run([str(binary), *suffix], capture_output=True, cwd=root, timeout=5)
                self.assertEqual(result.returncode == 0, expected, result.stderr.decode(errors='replace'))

    def test_tree_and_list_predicates_accept_alternatives(self):
        specs = leetcode.load_json(leetcode.ROOT/'data/environments/catalog.json')
        fixtures = {
            '1382': ('buildTree(vector<optional<int>>{3,2,4,1})', 'buildTree(vector<optional<int>>{1,nullopt,2,nullopt,3,nullopt,4})'),
            '701': ('buildTree(vector<optional<int>>{5,2,7,1,4,nullopt,nullopt,nullopt,nullopt,3})', 'buildTree(vector<optional<int>>{4,2,7,1,3})'),
            '889': ('buildTree(vector<optional<int>>{1,nullopt,2})', 'buildTree(vector<optional<int>>{1,3})'),
            '1171': ('buildList(vector<int>{1,2,1})', 'buildList(vector<int>{1,3})'),
            '1044': ('string("ana")', 'string("nan")'),
            '2212': ('vector<int>{0,0,0,0,1,1,0,0,1,2,3,1}', 'vector<int>{0,0,0,0,0,0,0,0,0,0,0,9}'),
        }
        for identifier, expressions in fixtures.items():
            with self.subTest(identifier=identifier):
                spec = specs[identifier]
                case = spec['cases'][-1] if identifier == '889' else spec['cases'][0]
                body = prepare_environments.render_case(identifier, spec, case)
                args = ', '.join(p['name'] for p in spec['metadata']['params'])
                call = f"auto localResult = solution.{spec['metadata']['name']}({args});"
                self.assertIn(call, body)
                variants = [body.replace(call, f'auto localResult = {expression};') for expression in expressions]
                self.run_candidates(PREFIX, *variants)

    def test_borrowed_node_identity(self):
        specs = leetcode.load_json(leetcode.ROOT/'data/environments/catalog.json')
        for identifier, call, candidates in (
            ('235', 'solution.lowestCommonAncestor(root, p, q)', ('root', 'p')),
            ('1379', 'solution.getTargetCopy(original, cloned, target)', ('cloned->right', 'target')),
        ):
            body = prepare_environments.render_case(identifier, specs[identifier], specs[identifier]['cases'][0])
            self.assertIn(call, body)
            self.run_candidates(PREFIX, *(body.replace(call, candidate) for candidate in candidates))

    def test_ownership_collects_new_nodes_below_previously_owned_roots(self):
        valid = '''{
unordered_set<TreeNode*> trees;
TreeNode* root = new TreeNode(1); collectTreeNodes(root, trees);
root->left = new TreeNode(2); collectTreeNodes(root, trees); assert(trees.size() == 2);
for (TreeNode* node : trees) delete node;
unordered_set<ListNode*> lists;
ListNode* head = new ListNode(1); collectListNodes(head, lists);
head->next = new ListNode(2); head->next->next = head;
collectListNodes(head, lists); assert(lists.size() == 2);
for (ListNode* node : lists) delete node;
}'''
        self.run_candidates(PREFIX, valid, '{ assert(false); }')

    def test_special_node_models_and_output_predicates(self):
        specs = leetcode.load_json(leetcode.ROOT/'data/environments/catalog.json')
        fixtures = {
            'LCR 29': ('Node* fresh = new Node(2, head); head->next->next->next = fresh; auto localResult = head;',
                       'Node* fresh = new Node(2, head->next); head->next = fresh; auto localResult = head;'),
            '116': ('for (const auto& level : levels) for (size_t i=0; i<level.size(); ++i) level[i]->next = i+1<level.size()?level[i+1]:nullptr; auto localResult = root;',
                    'auto localResult = root;'),
            '117': ('for (const auto& level : levels) for (size_t i=0; i<level.size(); ++i) level[i]->next = i+1<level.size()?level[i+1]:nullptr; auto localResult = root;',
                    'auto localResult = root;'),
            '430': ('vector<Node*> order; function<void(Node*)> gather = [&](Node* current) { for (;current;current=current->next) { order.push_back(current); gather(current->child); } }; gather(head);'
                    ' for (size_t i=0;i<order.size();++i) { order[i]->prev=i?order[i-1]:nullptr; order[i]->next=i+1<order.size()?order[i+1]:nullptr; order[i]->child=nullptr; } auto localResult=head;',
                    'auto localResult = head;'),
            '427': ('Node* localResult = new Node(true,false,new Node(false,true),new Node(true,true),new Node(true,true),new Node(false,true));',
                    'Node* localResult = new Node(false,true);'),
            '558': ('Node* localResult = new Node(false,false,new Node(true,true),new Node(true,true),new Node(true,true),new Node(false,true));',
                    'Node* localResult = new Node(false,true);'),
        }
        calls = {'LCR 29':'auto localResult = solution.insert(head, insertVal);',
                 '116':'auto localResult = solution.connect(root);', '117':'auto localResult = solution.connect(root);', '430':'auto localResult = solution.flatten(head);',
                 '427':'auto localResult = solution.construct(grid);', '558':'auto localResult = solution.intersect(quadTree1, quadTree2);'}
        for identifier, candidates in fixtures.items():
            with self.subTest(identifier=identifier):
                spec = specs[identifier]
                body = prepare_environments.render_case(identifier, spec, spec['cases'][0])
                self.assertIn(calls[identifier], body)
                variants = [body.replace(calls[identifier], candidate) for candidate in candidates]
                prefix = PREFIX.replace('#include "common/leetcode.hpp"',
                    '#define Node LocalRandomListNode\n#include "common/leetcode.hpp"\n#undef Node')
                self.run_candidates(prefix + special_node_environments.prelude(identifier), *variants)

    def test_nary_serialized_children_and_empty_child_groups(self):
        valid = '''{
unordered_set<Node*> owned;
Node* root = localBuildNary({1,nullopt,3,2,4,nullopt,5,6}, owned);
assert(root->val == 1 && root->children.size() == 3 && owned.size() == 6);
assert(root->children[0]->val == 3 && root->children[0]->children[0]->val == 5 && root->children[0]->children[1]->val == 6);
assert(root->children[1]->val == 2 && root->children[1]->children.empty());
assert(root->children[2]->val == 4 && root->children[2]->children.empty());
for (Node* node : owned) delete node;
}'''
        prefix = PREFIX.replace('#include "common/leetcode.hpp"',
            '#define Node LocalRandomListNode\n#include "common/leetcode.hpp"\n#undef Node')
        self.run_candidates(prefix + special_node_environments.prelude('589'), valid, '{ assert(false); }')

    def test_codec_roundtrip_fixture_checks_tree_contents(self):
        specs = leetcode.load_json(leetcode.ROOT/'data/environments/catalog.json')
        for identifier in ('297','449'):
            with self.subTest(identifier=identifier):
                case = specs[identifier]['cases'][0]
                body = prepare_environments.render_case(identifier, specs[identifier], case)
                body = body.replace('serializer.serialize(root)', 'string("opaque")')
                values = ', '.join('nullopt' if value is None else str(value) for value in case['args'][0])
                valid = body.replace('deserializer.deserialize(encoded)', f'buildTree(vector<optional<int>>{{{values}}})')
                invalid = body.replace('deserializer.deserialize(encoded)', 'buildTree(vector<optional<int>>{999})')
                self.run_candidates(PREFIX, valid, invalid)
