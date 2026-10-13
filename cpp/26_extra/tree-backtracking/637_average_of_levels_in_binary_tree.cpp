/*
 * Problem: 637. 二叉树的层平均值 / Average of Levels in Binary Tree
 * Link: https://leetcode.cn/problems/average-of-levels-in-binary-tree/
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
    vector<double> averageOfLevels(TreeNode* root) {
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
        auto localResult = solution.averageOfLevels(root);
        vector<double> expected = {3.0, 14.5, 11.0};
        assert((approxEqual(localResult, expected)));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{3, 9, 20, 15, 7});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.averageOfLevels(root);
        vector<double> expected = {3.0, 14.5, 11.0};
        assert((approxEqual(localResult, expected)));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
