/*
 * Problem: 2096. 从二叉树一个节点到另一个节点每一步的方向 / Step-By-Step Directions From a Binary Tree Node to Another
 * Link: https://leetcode.cn/problems/step-by-step-directions-from-a-binary-tree-node-to-another/
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
    string getDirections(TreeNode* root, int startValue, int destValue) {
        // TODO: 在这里实现你的解法。
        (void)root;
        (void)startValue;
        (void)destValue;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{5, 1, 2, 3, nullopt, 6, 4});
        collectTreeNodes(root, localOwnedTrees);
        int startValue = 3;
        int destValue = 6;
        auto localResult = solution.getDirections(root, startValue, destValue);
        string expected = "UURL";
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{2, 1});
        collectTreeNodes(root, localOwnedTrees);
        int startValue = 2;
        int destValue = 1;
        auto localResult = solution.getDirections(root, startValue, destValue);
        string expected = "L";
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
