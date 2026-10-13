/*
 * Problem: 1080. 根到叶路径上的不足节点 / Insufficient Nodes in Root to Leaf Paths
 * Link: https://leetcode.cn/problems/insufficient-nodes-in-root-to-leaf-paths/
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
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)limit;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, 4, -99, -99, 7, 8, 9, -99, -99, 12, 13, -99, 14});
        collectTreeNodes(root, localOwnedTrees);
        int limit = 1;
        auto localResult = solution.sufficientSubset(root, limit);
        vector<optional<int>> expected = {1, 2, 3, 4, nullopt, nullopt, 7, 8, 9, nullopt, 14};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{5, 4, 8, 11, nullopt, 17, 4, 7, 1, nullopt, nullopt, 5, 3});
        collectTreeNodes(root, localOwnedTrees);
        int limit = 22;
        auto localResult = solution.sufficientSubset(root, limit);
        vector<optional<int>> expected = {5, 4, 8, 11, nullopt, 17, 4, 7, nullopt, nullopt, nullopt, 5};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, -3, -5, nullopt, 4, nullopt});
        collectTreeNodes(root, localOwnedTrees);
        int limit = -1;
        auto localResult = solution.sufficientSubset(root, limit);
        vector<optional<int>> expected = {1, nullopt, -3, 4};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
