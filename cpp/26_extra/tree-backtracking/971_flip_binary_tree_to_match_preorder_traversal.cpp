/*
 * Problem: 971. 翻转二叉树以匹配先序遍历 / Flip Binary Tree To Match Preorder Traversal
 * Link: https://leetcode.cn/problems/flip-binary-tree-to-match-preorder-traversal/
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
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)voyage;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2});
        collectTreeNodes(root, localOwnedTrees);
        vector<int> voyage = {2, 1};
        auto localResult = solution.flipMatchVoyage(root, voyage);
        vector<int> expected = {-1};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3});
        collectTreeNodes(root, localOwnedTrees);
        vector<int> voyage = {1, 3, 2};
        auto localResult = solution.flipMatchVoyage(root, voyage);
        vector<int> expected = {1};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3});
        collectTreeNodes(root, localOwnedTrees);
        vector<int> voyage = {1, 2, 3};
        auto localResult = solution.flipMatchVoyage(root, voyage);
        vector<int> expected = {};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
