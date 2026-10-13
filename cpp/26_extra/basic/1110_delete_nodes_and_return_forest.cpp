/*
 * Problem: 1110. 删点成林 / Delete Nodes And Return Forest
 * Link: https://leetcode.cn/problems/delete-nodes-and-return-forest/
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
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)to_delete;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 3, 4, 5, 6, 7});
        collectTreeNodes(root, localOwnedTrees);
        vector<int> to_delete = {3, 5};
        auto localResult = solution.delNodes(root, to_delete);
        vector<vector<optional<int>>> expected;
        expected.push_back(vector<optional<int>>{1, 2, nullopt, 4});
        expected.push_back(vector<optional<int>>{6});
        expected.push_back(vector<optional<int>>{7});
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
        TreeNode* root = buildTree(vector<optional<int>>{1, 2, 4, nullopt, 3});
        collectTreeNodes(root, localOwnedTrees);
        vector<int> to_delete = {3};
        auto localResult = solution.delNodes(root, to_delete);
        vector<vector<optional<int>>> expected;
        expected.push_back(vector<optional<int>>{1, 2, 4});
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
