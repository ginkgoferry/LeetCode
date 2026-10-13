/*
 * Problem: 2385. 感染二叉树需要的总时间 / Amount of Time for Binary Tree to Be Infected
 * Link: https://leetcode.cn/problems/amount-of-time-for-binary-tree-to-be-infected/
 * Chapter: 动态规划
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
    int amountOfTime(TreeNode* root, int start) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)start;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 5, 3, nullopt, 4, 10, 6, 9, 2});
        collectTreeNodes(root, localOwnedTrees);
        int start = 3;
        auto localResult = solution.amountOfTime(root, start);
        int expected = 4;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1});
        collectTreeNodes(root, localOwnedTrees);
        int start = 1;
        auto localResult = solution.amountOfTime(root, start);
        int expected = 0;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
