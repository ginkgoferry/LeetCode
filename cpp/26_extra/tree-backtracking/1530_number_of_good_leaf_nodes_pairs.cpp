/*
 * Problem: 1530. 好叶子节点对的数量 / Number of Good Leaf Nodes Pairs
 * Link: https://leetcode.cn/problems/number-of-good-leaf-nodes-pairs/
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
    int countPairs(TreeNode* root, int distance) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)distance;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, nullopt, 4});
        collectTreeNodes(root, localOwnedTrees);
        int distance = 3;
        auto localResult = solution.countPairs(root, distance);
        int expected = 1;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, 4, 5, 6, 7});
        collectTreeNodes(root, localOwnedTrees);
        int distance = 3;
        auto localResult = solution.countPairs(root, distance);
        int expected = 2;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{7, 1, 4, 6, nullopt, 5, 3, nullopt, nullopt, nullopt, nullopt, nullopt, 2});
        collectTreeNodes(root, localOwnedTrees);
        int distance = 3;
        auto localResult = solution.countPairs(root, distance);
        int expected = 1;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{100});
        collectTreeNodes(root, localOwnedTrees);
        int distance = 1;
        auto localResult = solution.countPairs(root, distance);
        int expected = 0;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 1, 1});
        collectTreeNodes(root, localOwnedTrees);
        int distance = 2;
        auto localResult = solution.countPairs(root, distance);
        int expected = 1;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
