/*
 * Problem: 430. 扁平化多级双向链表 / Flatten a Multilevel Doubly Linked List
 * Link: https://leetcode.cn/problems/flatten-a-multilevel-doubly-linked-list/
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
    int val; Node *prev, *next, *child;
    Node() : val(0), prev(nullptr), next(nullptr), child(nullptr) {}
    explicit Node(int value) : val(value), prev(nullptr), next(nullptr), child(nullptr) {}
    Node(int value, Node* before, Node* after, Node* below) : val(value), prev(before), next(after), child(below) {}
};
inline Node* localBuildMultilevel(const vector<optional<int>>& data, unordered_set<Node*>& owned) {
    size_t position = 0;
    auto chain = [&]() {
        vector<Node*> nodes;
        while (position < data.size() && data[position]) {
            Node* node = new Node(*data[position++]); owned.insert(node);
            if (!nodes.empty()) { node->prev = nodes.back(); nodes.back()->next = node; }
            nodes.push_back(node);
        }
        return nodes;
    };
    auto level = chain(); Node* head = level.empty() ? nullptr : level[0];
    while (position < data.size()) {
        assert(!data[position++]); size_t offset = 0;
        while (position < data.size() && !data[position]) { ++offset; ++position; }
        if (position == data.size()) break;
        assert(offset < level.size()); Node* parent = level[offset];
        level = chain(); assert(!level.empty()); parent->child = level[0];
    }
    return head;
}

#endif

class Solution {
public:
    Node* flatten(Node* head) {
        // TODO: 在这里实现你的解法。
        (void)head;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例：多级双向链表。
        unordered_set<Node*> owned;
        Node* head = localBuildMultilevel(vector<optional<int>>{1, 2, 3, 4, 5, 6, nullopt, nullopt, nullopt, 7, 8, 9, 10, nullopt, nullopt, 11, 12}, owned);
        auto localResult = solution.flatten(head); vector<int> observed; unordered_set<Node*> seen;
        Node* previous = nullptr;
        for (Node* current = localResult; current; current = current->next) {
            assert(seen.insert(current).second && current->prev == previous && !current->child);
            observed.push_back(current->val); previous = current;
        }
        vector<int> expected = {1, 2, 3, 7, 8, 11, 12, 9, 10, 4, 5, 6};
        assert(observed == expected);
        owned.insert(seen.begin(), seen.end()); for (Node* allocated : owned) delete allocated;
    }

    {
        // 官方样例：多级双向链表。
        unordered_set<Node*> owned;
        Node* head = localBuildMultilevel(vector<optional<int>>{1, 2, nullopt, 3}, owned);
        auto localResult = solution.flatten(head); vector<int> observed; unordered_set<Node*> seen;
        Node* previous = nullptr;
        for (Node* current = localResult; current; current = current->next) {
            assert(seen.insert(current).second && current->prev == previous && !current->child);
            observed.push_back(current->val); previous = current;
        }
        vector<int> expected = {1, 3, 2};
        assert(observed == expected);
        owned.insert(seen.begin(), seen.end()); for (Node* allocated : owned) delete allocated;
    }

    {
        // 官方样例：多级双向链表。
        unordered_set<Node*> owned;
        Node* head = localBuildMultilevel(vector<optional<int>>{}, owned);
        auto localResult = solution.flatten(head); vector<int> observed; unordered_set<Node*> seen;
        Node* previous = nullptr;
        for (Node* current = localResult; current; current = current->next) {
            assert(seen.insert(current).second && current->prev == previous && !current->child);
            observed.push_back(current->val); previous = current;
        }
        vector<int> expected = {};
        assert(observed == expected);
        owned.insert(seen.begin(), seen.end()); for (Node* allocated : owned) delete allocated;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
