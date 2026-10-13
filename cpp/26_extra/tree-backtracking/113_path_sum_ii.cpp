/*
 * Problem: 113. 路径总和 II / Path Sum II
 * Link: https://leetcode.cn/problems/path-sum-ii/
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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)targetSum;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{5, 4, 8, 11, nullopt, 13, 4, 7, 2, nullopt, nullopt, 5, 1});
        collectTreeNodes(root, localOwnedTrees);
        int targetSum = 22;
        auto localResult = solution.pathSum(root, targetSum);
        vector<vector<int>> expected = {{5, 4, 11, 2}, {5, 8, 4, 5}};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3});
        collectTreeNodes(root, localOwnedTrees);
        int targetSum = 5;
        auto localResult = solution.pathSum(root, targetSum);
        vector<vector<int>> expected = {};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2});
        collectTreeNodes(root, localOwnedTrees);
        int targetSum = 0;
        auto localResult = solution.pathSum(root, targetSum);
        vector<vector<int>> expected = {};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
