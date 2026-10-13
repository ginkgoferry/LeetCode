/*
 * Problem: 1305. 两棵二叉搜索树中的所有元素 / All Elements in Two Binary Search Trees
 * Link: https://leetcode.cn/problems/all-elements-in-two-binary-search-trees/
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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
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
        TreeNode* root1 = buildTree(vector<optional<int>>{2, 1, 4});
        collectTreeNodes(root1, localOwnedTrees);
        TreeNode* root2 = buildTree(vector<optional<int>>{1, 0, 3});
        collectTreeNodes(root2, localOwnedTrees);
        auto localResult = solution.getAllElements(root1, root2);
        vector<int> expected = {0, 1, 1, 2, 3, 4};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root1 = buildTree(vector<optional<int>>{1, nullopt, 8});
        collectTreeNodes(root1, localOwnedTrees);
        TreeNode* root2 = buildTree(vector<optional<int>>{8, 1});
        collectTreeNodes(root2, localOwnedTrees);
        auto localResult = solution.getAllElements(root1, root2);
        vector<int> expected = {1, 1, 8, 8};
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
