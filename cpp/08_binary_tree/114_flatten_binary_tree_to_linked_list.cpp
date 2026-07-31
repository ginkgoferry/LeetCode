/*
 * Problem: 114. 二叉树展开为链表 / Flatten Binary Tree to Linked List
 * Link: https://leetcode.cn/problems/flatten-binary-tree-to-linked-list/
 * Chapter: 二叉树
 * Difficulty: Medium
 *
 * Idea:
 * - 
 *
 * Complexity:
 * - Time:
 * - Space:
 *
 * Pitfalls:
 * - 
 *
 * Review:
 * - First pass:
 * - Last attempt:
 * - Last review:
 * - Next review:
 * - Confidence:
 * - Sessions: 0
 * - Status: TODO
 */

#include <algorithm>
#include <cassert>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

#ifdef LOCAL
#include "common/leetcode.hpp"
#endif


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 5, 3, 4, nullopt, 6});
        solution.flatten(root);
        assert((flattenedTreeValues(root) == vector<int>{1, 2, 3, 4, 5, 6}));
        freeTree(root);
    }
    {
        TreeNode* root = buildTree(vector<optional<int>>{});
        solution.flatten(root);
        assert((flattenedTreeValues(root) == vector<int>{}));
        freeTree(root);
    }
    {
        TreeNode* root = buildTree(vector<optional<int>>{0});
        solution.flatten(root);
        assert((flattenedTreeValues(root) == vector<int>{0}));
        freeTree(root);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
