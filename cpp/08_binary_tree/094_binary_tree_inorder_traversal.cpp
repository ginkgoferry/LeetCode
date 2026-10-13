/*
 * Problem: 94. 二叉树的中序遍历 / Binary Tree Inorder Traversal
 * Link: https://leetcode.cn/problems/binary-tree-inorder-traversal/
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
    vector<int> inorderTraversal(TreeNode* root) {
        // TODO: 在这里实现你的解法。
        (void)root;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        TreeNode* root = buildTree(vector<optional<int>>{1, nullopt, 2, 3});
        assert((solution.inorderTraversal(root) == vector<int>{1, 3, 2}));
    }

    {
        TreeNode* root = buildTree(vector<optional<int>>{});
        assert((solution.inorderTraversal(root) == vector<int>{}));
    }

    {
        TreeNode* root = buildTree(vector<optional<int>>{1});
        assert((solution.inorderTraversal(root) == vector<int>{1}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
