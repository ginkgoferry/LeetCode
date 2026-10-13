/*
 * Problem: 1008. 前序遍历构造二叉搜索树 / Construct Binary Search Tree from Preorder Traversal
 * Link: https://leetcode.cn/problems/construct-binary-search-tree-from-preorder-traversal/
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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        // TODO: 在这里实现你的解法。
        (void)preorder;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        vector<int> preorder = {8, 5, 1, 7, 10, 12};
        auto localResult = solution.bstFromPreorder(preorder);
        vector<optional<int>> expected = {8, 5, 10, 1, 7, nullopt, 12};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        vector<int> preorder = {1, 3};
        auto localResult = solution.bstFromPreorder(preorder);
        vector<optional<int>> expected = {1, nullopt, 3};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
