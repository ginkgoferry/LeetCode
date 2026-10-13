/*
 * Problem: 1373. 二叉搜索子树的最大键值和 / Maximum Sum BST in Binary Tree
 * Link: https://leetcode.cn/problems/maximum-sum-bst-in-binary-tree/
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
    int maxSumBST(TreeNode* root) {
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
        TreeNode* root = buildTree(vector<optional<int>>{1, 4, 3, 2, 4, 2, 5, nullopt, nullopt, nullopt, nullopt, nullopt, nullopt, 4, 6});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.maxSumBST(root);
        int expected = 20;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{4, 3, nullopt, 1, 2});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.maxSumBST(root);
        int expected = 2;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{-4, -2, -5});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.maxSumBST(root);
        int expected = 0;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{2, 1, 3});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.maxSumBST(root);
        int expected = 6;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{5, 4, 8, 3, nullopt, 6, 3});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.maxSumBST(root);
        int expected = 7;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
