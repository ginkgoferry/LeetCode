/*
 * Problem: 872. 叶子相似的树 / Leaf-Similar Trees
 * Link: https://leetcode.cn/problems/leaf-similar-trees/
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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        // TODO: 在这里实现你的解法。
        (void)root1;
        (void)root2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root1 = buildTree(vector<optional<int>>{3, 5, 1, 6, 2, 9, 8, nullopt, nullopt, 7, 4});
        collectTreeNodes(root1, localOwnedTrees);
        TreeNode* root2 = buildTree(vector<optional<int>>{3, 5, 1, 6, 7, 4, 2, nullopt, nullopt, nullopt, nullopt, nullopt, nullopt, 9, 8});
        collectTreeNodes(root2, localOwnedTrees);
        auto localResult = solution.leafSimilar(root1, root2);
        bool expected = true;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root1 = buildTree(vector<optional<int>>{1, 2, 3});
        collectTreeNodes(root1, localOwnedTrees);
        TreeNode* root2 = buildTree(vector<optional<int>>{1, 3, 2});
        collectTreeNodes(root2, localOwnedTrees);
        auto localResult = solution.leafSimilar(root1, root2);
        bool expected = false;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
