/*
 * Problem: 938. 二叉搜索树的范围和 / Range Sum of BST
 * Link: https://leetcode.cn/problems/range-sum-of-bst/
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
    int rangeSumBST(TreeNode* root, int low, int high) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)low;
        (void)high;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{10, 5, 15, 3, 7, nullopt, 18});
        collectTreeNodes(root, localOwnedTrees);
        int low = 7;
        int high = 15;
        auto localResult = solution.rangeSumBST(root, low, high);
        int expected = 32;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{10, 5, 15, 3, 7, 13, 18, 1, nullopt, 6});
        collectTreeNodes(root, localOwnedTrees);
        int low = 6;
        int high = 10;
        auto localResult = solution.rangeSumBST(root, low, high);
        int expected = 23;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
