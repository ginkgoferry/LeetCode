/*
 * Problem: LCP 10. 二叉树任务调度 / 二叉树任务调度
 * Link: https://leetcode.cn/problems/er-cha-shu-ren-wu-diao-du/
 * Chapter: 动态规划
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
    double minimalExecTime(TreeNode* root) {
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
        TreeNode* root = buildTree(vector<optional<int>>{47, 74, 31});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.minimalExecTime(root);
        double expected = 121;
        assert((approxEqual(localResult, expected)));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{15, 21, nullopt, 24, nullopt, 27, 26});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.minimalExecTime(root);
        double expected = 87;
        assert((approxEqual(localResult, expected)));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 3, 2, nullopt, nullopt, 4, 4});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.minimalExecTime(root);
        double expected = 7.5;
        assert((approxEqual(localResult, expected)));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
