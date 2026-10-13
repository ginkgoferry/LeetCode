/*
 * Problem: 145. 二叉树的后序遍历 / Binary Tree Postorder Traversal
 * Link: https://leetcode.cn/problems/binary-tree-postorder-traversal/
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
    vector<int> postorderTraversal(TreeNode* root) {
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
        TreeNode* root = buildTree(vector<optional<int>>{1, nullopt, 2, 3});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.postorderTraversal(root);
        vector<int> expected = {3, 2, 1};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, 4, 5, nullopt, 8, nullopt, nullopt, 6, 7, 9});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.postorderTraversal(root);
        vector<int> expected = {4, 6, 7, 5, 2, 9, 8, 3, 1};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.postorderTraversal(root);
        vector<int> expected = {};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.postorderTraversal(root);
        vector<int> expected = {1};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
