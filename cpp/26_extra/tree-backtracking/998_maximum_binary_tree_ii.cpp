/*
 * Problem: 998. 最大二叉树 II / Maximum Binary Tree II
 * Link: https://leetcode.cn/problems/maximum-binary-tree-ii/
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
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)val;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{4, 1, 3, nullopt, nullopt, 2});
        collectTreeNodes(root, localOwnedTrees);
        int val = 5;
        auto localResult = solution.insertIntoMaxTree(root, val);
        vector<optional<int>> expected = {5, 4, nullopt, 1, 3, nullopt, nullopt, 2};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{5, 2, 4, nullopt, 1});
        collectTreeNodes(root, localOwnedTrees);
        int val = 3;
        auto localResult = solution.insertIntoMaxTree(root, val);
        vector<optional<int>> expected = {5, 2, 4, nullopt, 1, nullopt, 3};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{5, 2, 3, nullopt, 1});
        collectTreeNodes(root, localOwnedTrees);
        int val = 4;
        auto localResult = solution.insertIntoMaxTree(root, val);
        vector<optional<int>> expected = {5, 2, 4, nullopt, 1, 3};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
