/*
 * Problem: 2458. 移除子树后的二叉树高度 / Height of Binary Tree After Subtree Removal Queries
 * Link: https://leetcode.cn/problems/height-of-binary-tree-after-subtree-removal-queries/
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
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
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
        TreeNode* root = buildTree(vector<optional<int>>{1, 3, 4, 2, nullopt, 6, 5, nullopt, nullopt, nullopt, nullopt, nullopt, 7});
        collectTreeNodes(root, localOwnedTrees);
        vector<int> queries = {4};
        auto localResult = solution.treeQueries(root, queries);
        vector<int> expected = {2};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{5, 8, 9, 2, 1, 3, 7, 4, 6});
        collectTreeNodes(root, localOwnedTrees);
        vector<int> queries = {3, 2, 4, 8};
        auto localResult = solution.treeQueries(root, queries);
        vector<int> expected = {3, 2, 3, 2};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
