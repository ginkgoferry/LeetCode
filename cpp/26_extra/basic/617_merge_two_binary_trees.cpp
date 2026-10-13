/*
 * Problem: 617. 合并二叉树 / Merge Two Binary Trees
 * Link: https://leetcode.cn/problems/merge-two-binary-trees/
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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
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
        TreeNode* root1 = buildTree(vector<optional<int>>{1, 3, 2, 5});
        collectTreeNodes(root1, localOwnedTrees);
        TreeNode* root2 = buildTree(vector<optional<int>>{2, 1, 3, nullopt, 4, nullopt, 7});
        collectTreeNodes(root2, localOwnedTrees);
        auto localResult = solution.mergeTrees(root1, root2);
        vector<optional<int>> expected = {3, 4, 5, 5, 4, nullopt, 7};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root1 = buildTree(vector<optional<int>>{1});
        collectTreeNodes(root1, localOwnedTrees);
        TreeNode* root2 = buildTree(vector<optional<int>>{1, 2});
        collectTreeNodes(root2, localOwnedTrees);
        auto localResult = solution.mergeTrees(root1, root2);
        vector<optional<int>> expected = {2, 2};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
