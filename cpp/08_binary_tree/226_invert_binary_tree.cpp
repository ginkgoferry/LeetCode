/*
 * Problem: 226. 翻转二叉树 / Invert Binary Tree
 * Link: https://leetcode.cn/problems/invert-binary-tree/
 * Chapter: 二叉树
 * Difficulty: Easy
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
    TreeNode* invertTree(TreeNode* root) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        TreeNode* root = buildTree(vector<optional<int>>{4, 2, 7, 1, 3, 6, 9});
        TreeNode* result = solution.invertTree(root);
        assert((treeToVector(result) == vector<optional<int>>{4, 7, 2, 9, 6, 3, 1}));
    }

    {
        TreeNode* root = buildTree(vector<optional<int>>{2, 1, 3});
        TreeNode* result = solution.invertTree(root);
        assert((treeToVector(result) == vector<optional<int>>{2, 3, 1}));
    }

    {
        TreeNode* root = buildTree(vector<optional<int>>{});
        TreeNode* result = solution.invertTree(root);
        assert((treeToVector(result) == vector<optional<int>>{}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
