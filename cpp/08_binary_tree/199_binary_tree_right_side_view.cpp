/*
 * Problem: 199. 二叉树的右视图 / Binary Tree Right Side View
 * Link: https://leetcode.cn/problems/binary-tree-right-side-view/
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
    vector<int> rightSideView(TreeNode* root) {
        // TODO: 在这里实现你的解法。
        (void)root;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, nullopt, 5, nullopt, 4});
        assert((solution.rightSideView(root) == vector<int>{1, 3, 4}));
    }

    {
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, 4, nullopt, nullopt, nullopt, 5});
        assert((solution.rightSideView(root) == vector<int>{1, 3, 4, 5}));
    }

    {
        TreeNode* root = buildTree(vector<optional<int>>{1, nullopt, 3});
        assert((solution.rightSideView(root) == vector<int>{1, 3}));
    }

    {
        TreeNode* root = buildTree(vector<optional<int>>{});
        assert((solution.rightSideView(root) == vector<int>{}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
