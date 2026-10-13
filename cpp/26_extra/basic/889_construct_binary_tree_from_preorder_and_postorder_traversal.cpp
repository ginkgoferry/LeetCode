/*
 * Problem: 889. 从前序与后序遍历序列构造二叉树 / Construct Binary Tree from Preorder and Postorder Traversal
 * Link: https://leetcode.cn/problems/construct-binary-tree-from-preorder-and-postorder-traversal/
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
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        // TODO: 在这里实现你的解法。
        (void)preorder;
        (void)postorder;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        vector<int> preorder = {1, 2, 4, 5, 3, 6, 7};
        vector<int> postorder = {4, 5, 2, 6, 7, 3, 1};
        const auto localOriginalPreorder = preorder;
        const auto localOriginalPostorder = postorder;
        auto localResult = solution.constructFromPrePost(preorder, postorder);
        set<TreeNode*> seenNodes; vector<int> observedPreorder, observedPostorder;
        function<void(TreeNode*)> inspect = [&](TreeNode* current) {
            if (!current) return;
            assert(seenNodes.insert(current).second);
            observedPreorder.push_back(current->val);
            inspect(current->left); inspect(current->right);
            observedPostorder.push_back(current->val);
        };
        inspect(localResult);
        assert(observedPreorder == localOriginalPreorder && observedPostorder == localOriginalPostorder);
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        vector<int> preorder = {1};
        vector<int> postorder = {1};
        const auto localOriginalPreorder = preorder;
        const auto localOriginalPostorder = postorder;
        auto localResult = solution.constructFromPrePost(preorder, postorder);
        set<TreeNode*> seenNodes; vector<int> observedPreorder, observedPostorder;
        function<void(TreeNode*)> inspect = [&](TreeNode* current) {
            if (!current) return;
            assert(seenNodes.insert(current).second);
            observedPreorder.push_back(current->val);
            inspect(current->left); inspect(current->right);
            observedPostorder.push_back(current->val);
        };
        inspect(localResult);
        assert(observedPreorder == localOriginalPreorder && observedPostorder == localOriginalPostorder);
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 额外边界用例
        unordered_set<TreeNode*> localOwnedTrees;
        vector<int> preorder = {1, 2};
        vector<int> postorder = {2, 1};
        const auto localOriginalPreorder = preorder;
        const auto localOriginalPostorder = postorder;
        auto localResult = solution.constructFromPrePost(preorder, postorder);
        set<TreeNode*> seenNodes; vector<int> observedPreorder, observedPostorder;
        function<void(TreeNode*)> inspect = [&](TreeNode* current) {
            if (!current) return;
            assert(seenNodes.insert(current).second);
            observedPreorder.push_back(current->val);
            inspect(current->left); inspect(current->right);
            observedPostorder.push_back(current->val);
        };
        inspect(localResult);
        assert(observedPreorder == localOriginalPreorder && observedPostorder == localOriginalPostorder);
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
