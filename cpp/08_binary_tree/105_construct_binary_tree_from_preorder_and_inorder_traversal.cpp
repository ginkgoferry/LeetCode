/*
 * Problem: 105. 从前序与中序遍历序列构造二叉树 / Construct Binary Tree from Preorder and Inorder Traversal
 * Link: https://leetcode.cn/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // TODO: 在这里实现你的解法。
        (void)preorder;
        (void)inorder;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> preorder = {3, 9, 20, 15, 7};
        vector<int> inorder = {9, 3, 15, 20, 7};
        TreeNode* result = solution.buildTree(preorder, inorder);
        assert((treeToVector(result) == vector<optional<int>>{3, 9, 20, nullopt, nullopt, 15, 7}));
    }

    {
        vector<int> preorder = {-1};
        vector<int> inorder = {-1};
        TreeNode* result = solution.buildTree(preorder, inorder);
        assert((treeToVector(result) == vector<optional<int>>{-1}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
