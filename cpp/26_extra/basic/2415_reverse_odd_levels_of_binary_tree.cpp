/*
 * Problem: 2415. 反转二叉树的奇数层 / Reverse Odd Levels of Binary Tree
 * Link: https://leetcode.cn/problems/reverse-odd-levels-of-binary-tree/
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
    TreeNode* reverseOddLevels(TreeNode* root) {
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
        TreeNode* root = buildTree(vector<optional<int>>{2, 3, 5, 8, 13, 21, 34});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.reverseOddLevels(root);
        vector<optional<int>> expected = {2, 5, 3, 8, 13, 21, 34};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{7, 13, 11});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.reverseOddLevels(root);
        vector<optional<int>> expected = {7, 11, 13};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{0, 1, 2, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.reverseOddLevels(root);
        vector<optional<int>> expected = {0, 2, 1, 0, 0, 0, 0, 2, 2, 2, 2, 1, 1, 1, 1};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
