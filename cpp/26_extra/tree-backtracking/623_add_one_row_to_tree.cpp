/*
 * Problem: 623. 在二叉树中增加一行 / Add One Row to Tree
 * Link: https://leetcode.cn/problems/add-one-row-to-tree/
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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)val;
        (void)depth;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{4, 2, 6, 3, 1, 5});
        collectTreeNodes(root, localOwnedTrees);
        int val = 1;
        int depth = 2;
        auto localResult = solution.addOneRow(root, val, depth);
        vector<optional<int>> expected = {4, 1, 1, 2, nullopt, nullopt, 6, 3, 1, 5};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{4, 2, nullopt, 3, 1});
        collectTreeNodes(root, localOwnedTrees);
        int val = 1;
        int depth = 3;
        auto localResult = solution.addOneRow(root, val, depth);
        vector<optional<int>> expected = {4, 2, nullopt, 1, 1, 3, nullopt, nullopt, 1};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
