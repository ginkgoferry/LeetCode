/*
 * Problem: 652. 寻找重复的子树 / Find Duplicate Subtrees
 * Link: https://leetcode.cn/problems/find-duplicate-subtrees/
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
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        // TODO: 在这里实现你的解法。
        (void)root;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, 4, nullopt, 2, 4, nullopt, nullopt, 4});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.findDuplicateSubtrees(root);
        vector<vector<optional<int>>> expected;
        expected.push_back(vector<optional<int>>{2, 4});
        expected.push_back(vector<optional<int>>{4});
        vector<vector<optional<int>>> observed;
        for (TreeNode* localTreePart : localResult) observed.push_back(treeToVector(localTreePart));
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((observed == expected));
        for (TreeNode* localTreePart : localResult) collectTreeNodes(localTreePart, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{2, 1, 1});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.findDuplicateSubtrees(root);
        vector<vector<optional<int>>> expected;
        expected.push_back(vector<optional<int>>{1});
        vector<vector<optional<int>>> observed;
        for (TreeNode* localTreePart : localResult) observed.push_back(treeToVector(localTreePart));
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((observed == expected));
        for (TreeNode* localTreePart : localResult) collectTreeNodes(localTreePart, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{2, 2, 2, 3, nullopt, 3, nullopt});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.findDuplicateSubtrees(root);
        vector<vector<optional<int>>> expected;
        expected.push_back(vector<optional<int>>{2, 3});
        expected.push_back(vector<optional<int>>{3});
        vector<vector<optional<int>>> observed;
        for (TreeNode* localTreePart : localResult) observed.push_back(treeToVector(localTreePart));
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((observed == expected));
        for (TreeNode* localTreePart : localResult) collectTreeNodes(localTreePart, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
