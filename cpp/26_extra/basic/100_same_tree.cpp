/*
 * Problem: 100. 相同的树 / Same Tree
 * Link: https://leetcode.cn/problems/same-tree/
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // TODO: 在这里实现你的解法。
        (void)p;
        (void)q;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* p = buildTree(vector<optional<int>>{1, 2, 3});
        collectTreeNodes(p, localOwnedTrees);
        TreeNode* q = buildTree(vector<optional<int>>{1, 2, 3});
        collectTreeNodes(q, localOwnedTrees);
        auto localResult = solution.isSameTree(p, q);
        bool expected = true;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* p = buildTree(vector<optional<int>>{1, 2});
        collectTreeNodes(p, localOwnedTrees);
        TreeNode* q = buildTree(vector<optional<int>>{1, nullopt, 2});
        collectTreeNodes(q, localOwnedTrees);
        auto localResult = solution.isSameTree(p, q);
        bool expected = false;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* p = buildTree(vector<optional<int>>{1, 2, 1});
        collectTreeNodes(p, localOwnedTrees);
        TreeNode* q = buildTree(vector<optional<int>>{1, 1, 2});
        collectTreeNodes(q, localOwnedTrees);
        auto localResult = solution.isSameTree(p, q);
        bool expected = false;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
