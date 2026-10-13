/*
 * Problem: 538. 把二叉搜索树转换为累加树 / Convert BST to Greater Tree
 * Link: https://leetcode.cn/problems/convert-bst-to-greater-tree/
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
    TreeNode* convertBST(TreeNode* root) {
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
        TreeNode* root = buildTree(vector<optional<int>>{4, 1, 6, 0, 2, 5, 7, nullopt, nullopt, nullopt, 3, nullopt, nullopt, nullopt, 8});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.convertBST(root);
        vector<optional<int>> expected = {30, 36, 21, 36, 35, 26, 15, nullopt, nullopt, nullopt, 33, nullopt, nullopt, nullopt, 8};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{0, nullopt, 1});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.convertBST(root);
        vector<optional<int>> expected = {1, nullopt, 1};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 0, 2});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.convertBST(root);
        vector<optional<int>> expected = {3, 3, 2};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{3, 2, 4, 1});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.convertBST(root);
        vector<optional<int>> expected = {7, 9, 4, 10};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
