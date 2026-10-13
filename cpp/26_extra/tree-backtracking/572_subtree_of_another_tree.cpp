/*
 * Problem: 572. 另一棵树的子树 / Subtree of Another Tree
 * Link: https://leetcode.cn/problems/subtree-of-another-tree/
 * Chapter: 树与回溯
 * Difficulty: Easy
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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)subRoot;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{3, 4, 5, 1, 2});
        collectTreeNodes(root, localOwnedTrees);
        TreeNode* subRoot = buildTree(vector<optional<int>>{4, 1, 2});
        collectTreeNodes(subRoot, localOwnedTrees);
        auto localResult = solution.isSubtree(root, subRoot);
        bool expected = true;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{3, 4, 5, 1, 2, nullopt, nullopt, nullopt, nullopt, 0});
        collectTreeNodes(root, localOwnedTrees);
        TreeNode* subRoot = buildTree(vector<optional<int>>{4, 1, 2});
        collectTreeNodes(subRoot, localOwnedTrees);
        auto localResult = solution.isSubtree(root, subRoot);
        bool expected = false;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
