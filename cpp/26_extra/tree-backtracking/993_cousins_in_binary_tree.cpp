/*
 * Problem: 993. 二叉树的堂兄弟节点 / Cousins in Binary Tree
 * Link: https://leetcode.cn/problems/cousins-in-binary-tree/
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
    bool isCousins(TreeNode* root, int x, int y) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)x;
        (void)y;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, 4});
        collectTreeNodes(root, localOwnedTrees);
        int x = 4;
        int y = 3;
        auto localResult = solution.isCousins(root, x, y);
        bool expected = false;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, nullopt, 4, nullopt, 5});
        collectTreeNodes(root, localOwnedTrees);
        int x = 5;
        int y = 4;
        auto localResult = solution.isCousins(root, x, y);
        bool expected = true;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, nullopt, 4});
        collectTreeNodes(root, localOwnedTrees);
        int x = 2;
        int y = 3;
        auto localResult = solution.isCousins(root, x, y);
        bool expected = false;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
