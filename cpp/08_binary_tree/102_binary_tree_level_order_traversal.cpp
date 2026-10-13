/*
 * Problem: 102. 二叉树的层序遍历 / Binary Tree Level Order Traversal
 * Link: https://leetcode.cn/problems/binary-tree-level-order-traversal/
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // TODO: 在这里实现你的解法。
        (void)root;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        TreeNode* root = buildTree(vector<optional<int>>{3, 9, 20, nullopt, nullopt, 15, 7});
        assert((solution.levelOrder(root) == vector<vector<int>>{{3}, {9, 20}, {15, 7}}));
    }

    {
        TreeNode* root = buildTree(vector<optional<int>>{1});
        assert((solution.levelOrder(root) == vector<vector<int>>{{1}}));
    }

    {
        TreeNode* root = buildTree(vector<optional<int>>{});
        assert((solution.levelOrder(root) == vector<vector<int>>{}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
