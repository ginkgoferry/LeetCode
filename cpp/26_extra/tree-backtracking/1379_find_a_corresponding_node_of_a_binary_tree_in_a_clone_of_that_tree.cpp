/*
 * Problem: 1379. 找出克隆二叉树中的相同节点 / Find a Corresponding Node of a Binary Tree in a Clone of That Tree
 * Link: https://leetcode.cn/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        // TODO: 在这里实现你的解法。
        (void)original;
        (void)cloned;
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
        TreeNode* original = buildTree(vector<optional<int>>{7, 4, 3, nullopt, nullopt, 6, 19});
        collectTreeNodes(original, localOwnedTrees);
        TreeNode* cloned = buildTree(vector<optional<int>>{7, 4, 3, nullopt, nullopt, 6, 19});
        collectTreeNodes(cloned, localOwnedTrees);
        TreeNode* target = findTreeNode(original, 3);
        TreeNode* localExpectedResult = findTreeNode(cloned, 3);
        assert(target && localExpectedResult);
        auto localResult = solution.getTargetCopy(original, cloned, target);
        assert(localResult == localExpectedResult);
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* original = buildTree(vector<optional<int>>{7});
        collectTreeNodes(original, localOwnedTrees);
        TreeNode* cloned = buildTree(vector<optional<int>>{7});
        collectTreeNodes(cloned, localOwnedTrees);
        TreeNode* target = findTreeNode(original, 7);
        TreeNode* localExpectedResult = findTreeNode(cloned, 7);
        assert(target && localExpectedResult);
        auto localResult = solution.getTargetCopy(original, cloned, target);
        assert(localResult == localExpectedResult);
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* original = buildTree(vector<optional<int>>{8, nullopt, 6, nullopt, 5, nullopt, 4, nullopt, 3, nullopt, 2, nullopt, 1});
        collectTreeNodes(original, localOwnedTrees);
        TreeNode* cloned = buildTree(vector<optional<int>>{8, nullopt, 6, nullopt, 5, nullopt, 4, nullopt, 3, nullopt, 2, nullopt, 1});
        collectTreeNodes(cloned, localOwnedTrees);
        TreeNode* target = findTreeNode(original, 4);
        TreeNode* localExpectedResult = findTreeNode(cloned, 4);
        assert(target && localExpectedResult);
        auto localResult = solution.getTargetCopy(original, cloned, target);
        assert(localResult == localExpectedResult);
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
