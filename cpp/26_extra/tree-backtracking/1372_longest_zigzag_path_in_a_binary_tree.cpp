/*
 * Problem: 1372. 二叉树中的最长交错路径 / Longest ZigZag Path in a Binary Tree
 * Link: https://leetcode.cn/problems/longest-zigzag-path-in-a-binary-tree/
 * Chapter: 树与回溯
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
#include <cmath>
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

class Solution {
public:
    int longestZigZag(TreeNode* root) {
        // TODO: 在这里实现你的解法。
        (void)root;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, nullopt, 1, 1, 1, nullopt, nullopt, 1, 1, nullopt, 1, nullopt, nullopt, nullopt, 1, nullopt, 1});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.longestZigZag(root);
        int expected = 3;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 1, 1, nullopt, 1, nullopt, nullopt, 1, 1, nullopt, 1});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.longestZigZag(root);
        int expected = 4;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.longestZigZag(root);
        int expected = 0;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
