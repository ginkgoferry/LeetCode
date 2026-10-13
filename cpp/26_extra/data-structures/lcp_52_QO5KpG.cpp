/*
 * Problem: LCP 52. 二叉搜索树染色 / 二叉搜索树染色
 * Link: https://leetcode.cn/problems/QO5KpG/
 * Chapter: 数据结构
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
    int getNumber(TreeNode* root, vector<vector<int>>& ops) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)ops;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, nullopt, 2, nullopt, 3, nullopt, 4, nullopt, 5});
        collectTreeNodes(root, localOwnedTrees);
        vector<vector<int>> ops = {{1, 2, 4}, {1, 1, 3}, {0, 3, 5}};
        auto localResult = solution.getNumber(root, ops);
        int expected = 2;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{4, 2, 7, 1, nullopt, 5, nullopt, nullopt, nullopt, nullopt, 6});
        collectTreeNodes(root, localOwnedTrees);
        vector<vector<int>> ops = {{0, 2, 2}, {1, 1, 5}, {0, 4, 5}, {1, 5, 7}};
        auto localResult = solution.getNumber(root, ops);
        int expected = 5;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
