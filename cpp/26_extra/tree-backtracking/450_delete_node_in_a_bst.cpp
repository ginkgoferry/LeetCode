/*
 * Problem: 450. 删除二叉搜索树中的节点 / Delete Node in a BST
 * Link: https://leetcode.cn/problems/delete-node-in-a-bst/
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
    TreeNode* deleteNode(TreeNode* root, int key) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)key;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{5, 3, 6, 2, 4, nullopt, 7});
        collectTreeNodes(root, localOwnedTrees);
        int key = 3;
        auto localResult = solution.deleteNode(root, key);
        vector<optional<int>> expected = {5, 4, 6, 2, nullopt, nullopt, 7};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{5, 3, 6, 2, 4, nullopt, 7});
        collectTreeNodes(root, localOwnedTrees);
        int key = 0;
        auto localResult = solution.deleteNode(root, key);
        vector<optional<int>> expected = {5, 3, 6, 2, 4, nullopt, 7};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{});
        collectTreeNodes(root, localOwnedTrees);
        int key = 0;
        auto localResult = solution.deleteNode(root, key);
        vector<optional<int>> expected = {};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
