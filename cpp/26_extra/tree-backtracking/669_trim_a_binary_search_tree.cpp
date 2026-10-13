/*
 * Problem: 669. 修剪二叉搜索树 / Trim a Binary Search Tree
 * Link: https://leetcode.cn/problems/trim-a-binary-search-tree/
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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)low;
        (void)high;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 0, 2});
        collectTreeNodes(root, localOwnedTrees);
        int low = 1;
        int high = 2;
        auto localResult = solution.trimBST(root, low, high);
        vector<optional<int>> expected = {1, nullopt, 2};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{3, 0, 4, nullopt, 2, nullopt, nullopt, 1});
        collectTreeNodes(root, localOwnedTrees);
        int low = 1;
        int high = 3;
        auto localResult = solution.trimBST(root, low, high);
        vector<optional<int>> expected = {3, 2, nullopt, 1};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
