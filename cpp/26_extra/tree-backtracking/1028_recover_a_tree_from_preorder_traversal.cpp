/*
 * Problem: 1028. 从先序遍历还原二叉树 / Recover a Tree From Preorder Traversal
 * Link: https://leetcode.cn/problems/recover-a-tree-from-preorder-traversal/
 * Chapter: 树与回溯
 * Difficulty: Hard
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
    TreeNode* recoverFromPreorder(string traversal) {
        // TODO: 在这里实现你的解法。
        (void)traversal;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        string traversal = "1-2--3--4-5--6--7";
        auto localResult = solution.recoverFromPreorder(traversal);
        vector<optional<int>> expected = {1, 2, 5, 3, 4, 6, 7};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        string traversal = "1-2--3---4-5--6---7";
        auto localResult = solution.recoverFromPreorder(traversal);
        vector<optional<int>> expected = {1, 2, 5, 3, nullopt, 6, nullopt, 4, nullopt, 7};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        string traversal = "1-401--349---90--88";
        auto localResult = solution.recoverFromPreorder(traversal);
        vector<optional<int>> expected = {1, 401, nullopt, 349, 88, 90};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
