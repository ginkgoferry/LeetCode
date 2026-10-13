/*
 * Problem: 1932. 合并多棵二叉搜索树 / Merge BSTs to Create Single BST
 * Link: https://leetcode.cn/problems/merge-bsts-to-create-single-bst/
 * Chapter: 树与回溯
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
    TreeNode* canMerge(vector<TreeNode*>& trees) {
        // TODO: 在这里实现你的解法。
        (void)trees;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        vector<TreeNode*> trees;
        trees.push_back(buildTree(vector<optional<int>>{2, 1}));
        collectTreeNodes(trees.back(), localOwnedTrees);
        trees.push_back(buildTree(vector<optional<int>>{3, 2, 5}));
        collectTreeNodes(trees.back(), localOwnedTrees);
        trees.push_back(buildTree(vector<optional<int>>{5, 4}));
        collectTreeNodes(trees.back(), localOwnedTrees);
        auto localResult = solution.canMerge(trees);
        vector<optional<int>> expected = {3, 2, 5, 1, nullopt, 4};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        vector<TreeNode*> trees;
        trees.push_back(buildTree(vector<optional<int>>{5, 3, 8}));
        collectTreeNodes(trees.back(), localOwnedTrees);
        trees.push_back(buildTree(vector<optional<int>>{3, 2, 6}));
        collectTreeNodes(trees.back(), localOwnedTrees);
        auto localResult = solution.canMerge(trees);
        vector<optional<int>> expected = {};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        vector<TreeNode*> trees;
        trees.push_back(buildTree(vector<optional<int>>{5, 4}));
        collectTreeNodes(trees.back(), localOwnedTrees);
        trees.push_back(buildTree(vector<optional<int>>{3}));
        collectTreeNodes(trees.back(), localOwnedTrees);
        auto localResult = solution.canMerge(trees);
        vector<optional<int>> expected = {};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
