/*
 * Problem: 142. 环形链表 II / Linked List Cycle II
 * Link: https://leetcode.cn/problems/linked-list-cycle-ii/
 * Chapter: 链表
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


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // TODO: 在这里实现你的解法。
        (void)head;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        int pos = 1;
        ListNode* head = buildCycleList(vector<int>{3, 2, 0, -4}, pos);
        assert((solution.detectCycle(head) == getNodeAt(head, pos)));
        breakCycle(head, pos);
        freeList(head);
    }
    {
        int pos = 0;
        ListNode* head = buildCycleList(vector<int>{1, 2}, pos);
        assert((solution.detectCycle(head) == getNodeAt(head, pos)));
        breakCycle(head, pos);
        freeList(head);
    }
    {
        int pos = -1;
        ListNode* head = buildCycleList(vector<int>{1}, pos);
        assert((solution.detectCycle(head) == nullptr));
        breakCycle(head, pos);
        freeList(head);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
