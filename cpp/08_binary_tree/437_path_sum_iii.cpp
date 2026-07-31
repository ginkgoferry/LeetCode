/*
 * Problem: 437. 路径总和 III / Path Sum III
 * Link: https://leetcode.cn/problems/path-sum-iii/
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
    int pathSum(TreeNode* root, int targetSum) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        TreeNode* root = buildTree(vector<optional<int>>{10, 5, -3, 3, 2, nullopt, 11, 3, -2, nullopt, 1});
        int targetSum = 8;
        assert((solution.pathSum(root, targetSum) == 3));
    }

    {
        TreeNode* root = buildTree(vector<optional<int>>{5, 4, 8, 11, nullopt, 13, 4, 7, 2, nullopt, nullopt, 5, 1});
        int targetSum = 22;
        assert((solution.pathSum(root, targetSum) == 3));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
