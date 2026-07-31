/*
 * Problem: 108. 将有序数组转换为二叉搜索树 / Convert Sorted Array to Binary Search Tree
 * Link: https://leetcode.cn/problems/convert-sorted-array-to-binary-search-tree/
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {-10, -3, 0, 5, 9};
        TreeNode* result = solution.sortedArrayToBST(nums);
        assert((treeInorder(result) == nums));
        assert((isHeightBalanced(result)));
    }

    {
        vector<int> nums = {1, 3};
        TreeNode* result = solution.sortedArrayToBST(nums);
        assert((treeInorder(result) == nums));
        assert((isHeightBalanced(result)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
