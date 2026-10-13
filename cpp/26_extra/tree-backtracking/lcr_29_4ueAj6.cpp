/*
 * Problem: LCR 29. 循环有序列表的插入 / 循环有序列表的插入
 * Link: https://leetcode.cn/problems/4ueAj6/
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
    int val; Node* next;
    Node() : val(0), next(nullptr) {}
    explicit Node(int value) : val(value), next(nullptr) {}
    Node(int value, Node* following) : val(value), next(following) {}
};

#endif

class Solution {
public:
    Node* insert(Node* head, int insertVal) {
        // TODO: 在这里实现你的解法。
        (void)head;
        (void)insertVal;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例：循环链表必须保留原始头节点。
        vector<int> input = {3, 4, 1};
        int insertVal = 2;
        unordered_set<Node*> owned;
        Node* head = nullptr; Node* tail = nullptr;
        for (int element : input) {
            Node* fresh = new Node(element); owned.insert(fresh);
            if (!head) head = fresh; else tail->next = fresh; tail = fresh;
        }
        if (tail) tail->next = head;
        auto localResult = solution.insert(head, insertVal);
        assert(localResult); if (head) assert(localResult == head);
        vector<int> observed; unordered_set<Node*> seen; int descents = 0;
        Node* current = localResult;
        do {
            assert(current && current->next && seen.insert(current).second);
            observed.push_back(current->val); descents += current->val > current->next->val;
            current = current->next;
        } while (current != localResult);
        assert(descents <= 1); auto expected = input; expected.push_back(insertVal);
        sort(expected.begin(), expected.end()); sort(observed.begin(), observed.end());
        assert(observed == expected);
        owned.insert(seen.begin(), seen.end());
        for (Node* allocated : owned) delete allocated;
    }

    {
        // 官方样例：循环链表必须保留原始头节点。
        vector<int> input = {};
        int insertVal = 1;
        unordered_set<Node*> owned;
        Node* head = nullptr; Node* tail = nullptr;
        for (int element : input) {
            Node* fresh = new Node(element); owned.insert(fresh);
            if (!head) head = fresh; else tail->next = fresh; tail = fresh;
        }
        if (tail) tail->next = head;
        auto localResult = solution.insert(head, insertVal);
        assert(localResult); if (head) assert(localResult == head);
        vector<int> observed; unordered_set<Node*> seen; int descents = 0;
        Node* current = localResult;
        do {
            assert(current && current->next && seen.insert(current).second);
            observed.push_back(current->val); descents += current->val > current->next->val;
            current = current->next;
        } while (current != localResult);
        assert(descents <= 1); auto expected = input; expected.push_back(insertVal);
        sort(expected.begin(), expected.end()); sort(observed.begin(), observed.end());
        assert(observed == expected);
        owned.insert(seen.begin(), seen.end());
        for (Node* allocated : owned) delete allocated;
    }

    {
        // 官方样例：循环链表必须保留原始头节点。
        vector<int> input = {1};
        int insertVal = 0;
        unordered_set<Node*> owned;
        Node* head = nullptr; Node* tail = nullptr;
        for (int element : input) {
            Node* fresh = new Node(element); owned.insert(fresh);
            if (!head) head = fresh; else tail->next = fresh; tail = fresh;
        }
        if (tail) tail->next = head;
        auto localResult = solution.insert(head, insertVal);
        assert(localResult); if (head) assert(localResult == head);
        vector<int> observed; unordered_set<Node*> seen; int descents = 0;
        Node* current = localResult;
        do {
            assert(current && current->next && seen.insert(current).second);
            observed.push_back(current->val); descents += current->val > current->next->val;
            current = current->next;
        } while (current != localResult);
        assert(descents <= 1); auto expected = input; expected.push_back(insertVal);
        sort(expected.begin(), expected.end()); sort(observed.begin(), observed.end());
        assert(observed == expected);
        owned.insert(seen.begin(), seen.end());
        for (Node* allocated : owned) delete allocated;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
