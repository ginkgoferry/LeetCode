/*
 * Problem: 987. 二叉树的垂序遍历 / Vertical Order Traversal of a Binary Tree
 * Link: https://leetcode.cn/problems/vertical-order-traversal-of-a-binary-tree/
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
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
        TreeNode* root = buildTree(vector<optional<int>>{3, 9, 20, nullopt, nullopt, 15, 7});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.verticalTraversal(root);
        vector<vector<int>> expected = {{9}, {3, 15}, {20}, {7}};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, 4, 5, 6, 7});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.verticalTraversal(root);
        vector<vector<int>> expected = {{4}, {2}, {1, 5, 6}, {3}, {7}};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, 4, 6, 5, 7});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.verticalTraversal(root);
        vector<vector<int>> expected = {{4}, {2}, {1, 5, 6}, {3}, {7}};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
