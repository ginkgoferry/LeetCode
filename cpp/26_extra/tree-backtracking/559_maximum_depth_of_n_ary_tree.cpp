/*
 * Problem: 559. N 叉树的最大深度 / Maximum Depth of N-ary Tree
 * Link: https://leetcode.cn/problems/maximum-depth-of-n-ary-tree/
 * Chapter: 树与回溯
 * Difficulty: Easy
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
    int val; vector<Node*> children;
    Node() : val(0) {}
    explicit Node(int value) : val(value) {}
    Node(int value, vector<Node*> descendants) : val(value), children(std::move(descendants)) {}
};
inline Node* localBuildNary(const vector<optional<int>>& data, unordered_set<Node*>& owned) {
    if (data.empty() || !data[0]) return nullptr;
    auto create = [&](int value) { Node* node = new Node(value); owned.insert(node); return node; };
    Node* root = create(*data[0]); queue<Node*> pending; pending.push(root); size_t position = 1;
    if (position < data.size()) { assert(!data[position]); ++position; }
    while (position < data.size()) {
        assert(!pending.empty()); Node* parent = pending.front(); pending.pop();
        while (position < data.size() && data[position]) {
            Node* child = create(*data[position++]); parent->children.push_back(child); pending.push(child);
        }
        if (position < data.size()) ++position;
    }
    return root;
}

#endif

class Solution {
public:
    int maxDepth(Node* root) {
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
        Node* root = localBuildNary(vector<optional<int>>{1, nullopt, 3, 2, 4, nullopt, 5, 6}, owned);
        auto localResult = solution.maxDepth(root);
        int expected = 3;
        assert(localResult == expected);
        for (Node* allocated : owned) delete allocated;
    }

    {
        // 官方样例：专用 Node 接口。
        unordered_set<Node*> owned;
        Node* root = localBuildNary(vector<optional<int>>{1, nullopt, 2, 3, 4, 5, nullopt, nullopt, 6, 7, nullopt, 8, nullopt, 9, 10, nullopt, nullopt, 11, nullopt, 12, nullopt, 13, nullopt, nullopt, 14}, owned);
        auto localResult = solution.maxDepth(root);
        int expected = 5;
        assert(localResult == expected);
        for (Node* allocated : owned) delete allocated;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
