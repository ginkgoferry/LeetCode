/*
 * Problem: 236. 二叉树的最近公共祖先 / Lowest Common Ancestor of a Binary Tree
 * Link: https://leetcode.cn/problems/lowest-common-ancestor-of-a-binary-tree/
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
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        TreeNode* root = buildTree(vector<optional<int>>{3, 5, 1, 6, 2, 0, 8, nullopt, nullopt, 7, 4});
        TreeNode* p = findTreeNode(root, 5);
        TreeNode* q = findTreeNode(root, 1);
        assert((solution.lowestCommonAncestor(root, p, q) == findTreeNode(root, 3)));
        freeTree(root);
    }
    {
        TreeNode* root = buildTree(vector<optional<int>>{3, 5, 1, 6, 2, 0, 8, nullopt, nullopt, 7, 4});
        TreeNode* p = findTreeNode(root, 5);
        TreeNode* q = findTreeNode(root, 4);
        assert((solution.lowestCommonAncestor(root, p, q) == findTreeNode(root, 5)));
        freeTree(root);
    }
    {
        TreeNode* root = buildTree(vector<optional<int>>{1, 2});
        TreeNode* p = findTreeNode(root, 1);
        TreeNode* q = findTreeNode(root, 2);
        assert((solution.lowestCommonAncestor(root, p, q) == findTreeNode(root, 1)));
        freeTree(root);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
