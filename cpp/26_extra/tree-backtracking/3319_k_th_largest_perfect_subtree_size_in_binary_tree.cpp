/*
 * Problem: 3319. 第 K 大的完美二叉子树的大小 / K-th Largest Perfect Subtree Size in Binary Tree
 * Link: https://leetcode.cn/problems/k-th-largest-perfect-subtree-size-in-binary-tree/
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
    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        // TODO: 在这里实现你的解法。
        (void)root;
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
        TreeNode* root = buildTree(vector<optional<int>>{5, 3, 6, 5, 2, 5, 7, 1, 8, nullopt, nullopt, 6, 8});
        collectTreeNodes(root, localOwnedTrees);
        int k = 2;
        auto localResult = solution.kthLargestPerfectSubtree(root, k);
        int expected = 3;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, 4, 5, 6, 7});
        collectTreeNodes(root, localOwnedTrees);
        int k = 1;
        auto localResult = solution.kthLargestPerfectSubtree(root, k);
        int expected = 7;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, nullopt, 4});
        collectTreeNodes(root, localOwnedTrees);
        int k = 3;
        auto localResult = solution.kthLargestPerfectSubtree(root, k);
        int expected = -1;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
