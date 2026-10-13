/*
 * Problem: 117. 填充每个节点的下一个右侧节点指针 II / Populating Next Right Pointers in Each Node II
 * Link: https://leetcode.cn/problems/populating-next-right-pointers-in-each-node-ii/
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
#define Node LocalRandomListNode
#include "common/leetcode.hpp"
#undef Node

class Node {
public:
    int val; Node *left, *right, *next;
    Node() : val(0), left(nullptr), right(nullptr), next(nullptr) {}
    explicit Node(int value) : val(value), left(nullptr), right(nullptr), next(nullptr) {}
    Node(int value, Node* lhs, Node* rhs, Node* following) : val(value), left(lhs), right(rhs), next(following) {}
};
inline Node* localBuildNextTree(const vector<optional<int>>& data, unordered_set<Node*>& owned) {
    TreeNode* temporary = buildTree(data); unordered_set<TreeNode*> originals; collectTreeNodes(temporary, originals);
    function<Node*(TreeNode*)> copy = [&](TreeNode* current) -> Node* {
        if (!current) return nullptr;
        Node* node = new Node(current->val); owned.insert(node);
        node->left = copy(current->left); node->right = copy(current->right); return node;
    };
    Node* root = copy(temporary); for (TreeNode* node : originals) delete node; return root;
}

#endif

class Solution {
public:
    Node* connect(Node* root) {
        // TODO: 在这里实现你的解法。
        (void)root;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例：专用 Node 接口。
        unordered_set<Node*> owned;
        Node* root = localBuildNextTree(vector<optional<int>>{1, 2, 3, 4, 5, nullopt, 7}, owned);
        vector<vector<Node*>> levels; vector<int> originalValues; vector<pair<Node*,Node*>> originalChildren;
        vector<Node*> order; if (root) order.push_back(root);
        while (!order.empty()) {
            levels.push_back(order); vector<Node*> nextLevel;
            for (Node* current : order) {
                originalValues.push_back(current->val); originalChildren.push_back({current->left, current->right});
                if (current->left) nextLevel.push_back(current->left); if (current->right) nextLevel.push_back(current->right);
            }
            order = std::move(nextLevel);
        }
        auto localResult = solution.connect(root); assert(localResult == root);
        size_t position = 0;
        for (const auto& level : levels) for (size_t i = 0; i < level.size(); ++i) {
            Node* current = level[i];
            assert(current->val == originalValues[position] && current->left == originalChildren[position].first && current->right == originalChildren[position].second);
            assert(current->next == (i + 1 < level.size() ? level[i+1] : nullptr)); ++position;
        }
        for (Node* allocated : owned) delete allocated;
    }

    {
        // 官方样例：专用 Node 接口。
        unordered_set<Node*> owned;
        Node* root = localBuildNextTree(vector<optional<int>>{}, owned);
        vector<vector<Node*>> levels; vector<int> originalValues; vector<pair<Node*,Node*>> originalChildren;
        vector<Node*> order; if (root) order.push_back(root);
        while (!order.empty()) {
            levels.push_back(order); vector<Node*> nextLevel;
            for (Node* current : order) {
                originalValues.push_back(current->val); originalChildren.push_back({current->left, current->right});
                if (current->left) nextLevel.push_back(current->left); if (current->right) nextLevel.push_back(current->right);
            }
            order = std::move(nextLevel);
        }
        auto localResult = solution.connect(root); assert(localResult == root);
        size_t position = 0;
        for (const auto& level : levels) for (size_t i = 0; i < level.size(); ++i) {
            Node* current = level[i];
            assert(current->val == originalValues[position] && current->left == originalChildren[position].first && current->right == originalChildren[position].second);
            assert(current->next == (i + 1 < level.size() ? level[i+1] : nullptr)); ++position;
        }
        for (Node* allocated : owned) delete allocated;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
