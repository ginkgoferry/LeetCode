/*
 * Problem: 106. 从中序与后序遍历序列构造二叉树 / Construct Binary Tree from Inorder and Postorder Traversal
 * Link: https://leetcode.cn/problems/construct-binary-tree-from-inorder-and-postorder-traversal/
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        // TODO: 在这里实现你的解法。
        (void)inorder;
        (void)postorder;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        vector<int> inorder = {9, 3, 15, 20, 7};
        vector<int> postorder = {9, 15, 7, 20, 3};
        auto localResult = solution.buildTree(inorder, postorder);
        vector<optional<int>> expected = {3, 9, 20, nullopt, nullopt, 15, 7};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        vector<int> inorder = {-1};
        vector<int> postorder = {-1};
        auto localResult = solution.buildTree(inorder, postorder);
        vector<optional<int>> expected = {-1};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
