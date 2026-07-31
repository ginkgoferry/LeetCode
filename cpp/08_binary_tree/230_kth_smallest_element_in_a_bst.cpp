/*
 * Problem: 230. 二叉搜索树中第 K 小的元素 / Kth Smallest Element in a BST
 * Link: https://leetcode.cn/problems/kth-smallest-element-in-a-bst/
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
    int kthSmallest(TreeNode* root, int k) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        TreeNode* root = buildTree(vector<optional<int>>{3, 1, 4, nullopt, 2});
        int k = 1;
        assert((solution.kthSmallest(root, k) == 1));
    }

    {
        TreeNode* root = buildTree(vector<optional<int>>{5, 3, 6, 2, 4, nullopt, nullopt, 1});
        int k = 3;
        assert((solution.kthSmallest(root, k) == 3));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
