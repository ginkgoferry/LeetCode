/*
 * Problem: 99. 恢复二叉搜索树 / Recover Binary Search Tree
 * Link: https://leetcode.cn/problems/recover-binary-search-tree/
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
    void recoverTree(TreeNode* root) {
        // TODO: 在这里实现你的解法。
        (void)root;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 3, nullopt, nullopt, 2});
        collectTreeNodes(root, localOwnedTrees);
        solution.recoverTree(root);
        vector<optional<int>> expected = {3, 1, nullopt, nullopt, 2};
        assert((treeToVector(root) == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{3, 1, 4, nullopt, nullopt, 2});
        collectTreeNodes(root, localOwnedTrees);
        solution.recoverTree(root);
        vector<optional<int>> expected = {2, 1, 4, nullopt, nullopt, 3};
        assert((treeToVector(root) == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
