/*
 * Problem: 701. 二叉搜索树中的插入操作 / Insert into a Binary Search Tree
 * Link: https://leetcode.cn/problems/insert-into-a-binary-search-tree/
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)val;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{4, 2, 7, 1, 3});
        collectTreeNodes(root, localOwnedTrees);
        int val = 5;
        const auto localOriginalTree = treeToVector(root);
        auto localResult = solution.insertIntoBST(root, val);
        vector<int> expectedValues;
        for (const auto& value : localOriginalTree) if (value) expectedValues.push_back(*value);
        expectedValues.push_back(val);
        sort(expectedValues.begin(), expectedValues.end());
        set<TreeNode*> seenNodes; vector<int> observedValues;
        function<int(TreeNode*, long long, long long)> inspect = [&](TreeNode* current, long long low, long long high) {
            if (!current) return 0;
            assert(seenNodes.insert(current).second && current->val > low && current->val < high);
            int leftHeight = inspect(current->left, low, current->val);
            observedValues.push_back(current->val);
            int rightHeight = inspect(current->right, current->val, high);
            return 1 + max(leftHeight, rightHeight);
        };
        inspect(localResult, LLONG_MIN, LLONG_MAX);
        assert(observedValues == expectedValues);
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{40, 20, 60, 10, 30, 50, 70});
        collectTreeNodes(root, localOwnedTrees);
        int val = 25;
        const auto localOriginalTree = treeToVector(root);
        auto localResult = solution.insertIntoBST(root, val);
        vector<int> expectedValues;
        for (const auto& value : localOriginalTree) if (value) expectedValues.push_back(*value);
        expectedValues.push_back(val);
        sort(expectedValues.begin(), expectedValues.end());
        set<TreeNode*> seenNodes; vector<int> observedValues;
        function<int(TreeNode*, long long, long long)> inspect = [&](TreeNode* current, long long low, long long high) {
            if (!current) return 0;
            assert(seenNodes.insert(current).second && current->val > low && current->val < high);
            int leftHeight = inspect(current->left, low, current->val);
            observedValues.push_back(current->val);
            int rightHeight = inspect(current->right, current->val, high);
            return 1 + max(leftHeight, rightHeight);
        };
        inspect(localResult, LLONG_MIN, LLONG_MAX);
        assert(observedValues == expectedValues);
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{4, 2, 7, 1, 3, nullopt, nullopt, nullopt, nullopt, nullopt, nullopt});
        collectTreeNodes(root, localOwnedTrees);
        int val = 5;
        const auto localOriginalTree = treeToVector(root);
        auto localResult = solution.insertIntoBST(root, val);
        vector<int> expectedValues;
        for (const auto& value : localOriginalTree) if (value) expectedValues.push_back(*value);
        expectedValues.push_back(val);
        sort(expectedValues.begin(), expectedValues.end());
        set<TreeNode*> seenNodes; vector<int> observedValues;
        function<int(TreeNode*, long long, long long)> inspect = [&](TreeNode* current, long long low, long long high) {
            if (!current) return 0;
            assert(seenNodes.insert(current).second && current->val > low && current->val < high);
            int leftHeight = inspect(current->left, low, current->val);
            observedValues.push_back(current->val);
            int rightHeight = inspect(current->right, current->val, high);
            return 1 + max(leftHeight, rightHeight);
        };
        inspect(localResult, LLONG_MIN, LLONG_MAX);
        assert(observedValues == expectedValues);
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
