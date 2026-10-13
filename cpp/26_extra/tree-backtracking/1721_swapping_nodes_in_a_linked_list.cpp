/*
 * Problem: 1721. 交换链表中的节点 / Swapping Nodes in a Linked List
 * Link: https://leetcode.cn/problems/swapping-nodes-in-a-linked-list/
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
    ListNode* swapNodes(ListNode* head, int k) {
        // TODO: 在这里实现你的解法。
        (void)head;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{1, 2, 3, 4, 5});
        collectListNodes(head, localOwnedLists);
        int k = 2;
        auto localResult = solution.swapNodes(head, k);
        vector<int> expected = {1, 4, 3, 2, 5};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{7, 9, 6, 6, 7, 8, 3, 0, 9, 5});
        collectListNodes(head, localOwnedLists);
        int k = 5;
        auto localResult = solution.swapNodes(head, k);
        vector<int> expected = {7, 9, 6, 6, 8, 7, 3, 0, 9, 5};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{1});
        collectListNodes(head, localOwnedLists);
        int k = 1;
        auto localResult = solution.swapNodes(head, k);
        vector<int> expected = {1};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{1, 2});
        collectListNodes(head, localOwnedLists);
        int k = 1;
        auto localResult = solution.swapNodes(head, k);
        vector<int> expected = {2, 1};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{1, 2, 3});
        collectListNodes(head, localOwnedLists);
        int k = 2;
        auto localResult = solution.swapNodes(head, k);
        vector<int> expected = {1, 2, 3};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
