/*
 * Problem: 863. 二叉树中所有距离为 K 的结点 / All Nodes Distance K in Binary Tree
 * Link: https://leetcode.cn/problems/all-nodes-distance-k-in-binary-tree/
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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)target;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{3, 5, 1, 6, 2, 0, 8, nullopt, nullopt, 7, 4});
        collectTreeNodes(root, localOwnedTrees);
        TreeNode* target = findTreeNode(root, 5);
        assert(target);
        int k = 2;
        auto localResult = solution.distanceK(root, target, k);
        vector<int> expected = {7, 4, 1};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1});
        collectTreeNodes(root, localOwnedTrees);
        TreeNode* target = findTreeNode(root, 1);
        assert(target);
        int k = 3;
        auto localResult = solution.distanceK(root, target, k);
        vector<int> expected = {};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
