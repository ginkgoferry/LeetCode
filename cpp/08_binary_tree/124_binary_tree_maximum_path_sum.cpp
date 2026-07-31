/*
 * Problem: 124. 二叉树中的最大路径和 / Binary Tree Maximum Path Sum
 * Link: https://leetcode.cn/problems/binary-tree-maximum-path-sum/
 * Chapter: 二叉树
 * Difficulty: Hard
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
    int maxPathSum(TreeNode* root) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3});
        assert((solution.maxPathSum(root) == 6));
    }

    {
        TreeNode* root = buildTree(vector<optional<int>>{-10, 9, 20, nullopt, nullopt, 15, 7});
        assert((solution.maxPathSum(root) == 42));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
