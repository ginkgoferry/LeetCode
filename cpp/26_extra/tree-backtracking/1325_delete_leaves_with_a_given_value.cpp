/*
 * Problem: 1325. 删除给定值的叶子节点 / Delete Leaves With a Given Value
 * Link: https://leetcode.cn/problems/delete-leaves-with-a-given-value/
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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, 2, nullopt, 2, 4});
        collectTreeNodes(root, localOwnedTrees);
        int target = 2;
        auto localResult = solution.removeLeafNodes(root, target);
        vector<optional<int>> expected = {1, nullopt, 3, nullopt, 4};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 3, 3, 3, 2});
        collectTreeNodes(root, localOwnedTrees);
        int target = 3;
        auto localResult = solution.removeLeafNodes(root, target);
        vector<optional<int>> expected = {1, 3, nullopt, nullopt, 2};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, nullopt, 2, nullopt, 2});
        collectTreeNodes(root, localOwnedTrees);
        int target = 2;
        auto localResult = solution.removeLeafNodes(root, target);
        vector<optional<int>> expected = {1};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
