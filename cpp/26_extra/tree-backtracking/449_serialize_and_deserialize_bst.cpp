/*
 * Problem: 449. 序列化和反序列化二叉搜索树 / Serialize and Deserialize BST
 * Link: https://leetcode.cn/problems/serialize-and-deserialize-bst/
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

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        // TODO: 在这里实现你的解法。
        (void)root;
        return {};
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        // TODO: 在这里实现你的解法。
        (void)data;
        return {};
    }
};

#ifdef LOCAL
int main() {
    Codec serializer, deserializer;

    {
        // 官方样例：平台驱动接口。
        unordered_set<TreeNode*> owned;
        TreeNode* root = buildTree(vector<optional<int>>{2, 1, 3});
        collectTreeNodes(root, owned); const auto expected = treeToVector(root);
        string encoded = serializer.serialize(root);
        TreeNode* localResult = deserializer.deserialize(encoded);
        assert(treeToVector(localResult) == expected);
        collectTreeNodes(localResult, owned);
        for (TreeNode* allocated : owned) delete allocated;
    }

    {
        // 官方样例：平台驱动接口。
        unordered_set<TreeNode*> owned;
        TreeNode* root = buildTree(vector<optional<int>>{});
        collectTreeNodes(root, owned); const auto expected = treeToVector(root);
        string encoded = serializer.serialize(root);
        TreeNode* localResult = deserializer.deserialize(encoded);
        assert(treeToVector(localResult) == expected);
        collectTreeNodes(localResult, owned);
        for (TreeNode* allocated : owned) delete allocated;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
