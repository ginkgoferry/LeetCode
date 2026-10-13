/*
 * Problem: 2476. 二叉搜索树最近节点查询 / Closest Nodes Queries in a Binary Search Tree
 * Link: https://leetcode.cn/problems/closest-nodes-queries-in-a-binary-search-tree/
 * Chapter: 二分查找
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
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{6, 2, 13, 1, 4, 9, 15, nullopt, nullopt, nullopt, nullopt, nullopt, nullopt, 14});
        collectTreeNodes(root, localOwnedTrees);
        vector<int> queries = {2, 5, 16};
        auto localResult = solution.closestNodes(root, queries);
        vector<vector<int>> expected = {{2, 2}, {4, 6}, {15, -1}};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{4, nullopt, 9});
        collectTreeNodes(root, localOwnedTrees);
        vector<int> queries = {3};
        auto localResult = solution.closestNodes(root, queries);
        vector<vector<int>> expected = {{-1, 4}};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
