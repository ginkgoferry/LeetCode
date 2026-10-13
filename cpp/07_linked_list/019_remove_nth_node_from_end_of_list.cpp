/*
 * Problem: 19. 删除链表的倒数第 N 个结点 / Remove Nth Node From End of List
 * Link: https://leetcode.cn/problems/remove-nth-node-from-end-of-list/
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
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // TODO: 在这里实现你的解法。
        (void)head;
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        ListNode* head = buildList(vector<int>{1, 2, 3, 4, 5});
        int n = 2;
        ListNode* result = solution.removeNthFromEnd(head, n);
        assert((listToVector(result) == vector<int>{1, 2, 3, 5}));
    }

    {
        ListNode* head = buildList(vector<int>{1});
        int n = 1;
        ListNode* result = solution.removeNthFromEnd(head, n);
        assert((listToVector(result) == vector<int>{}));
    }

    {
        ListNode* head = buildList(vector<int>{1, 2});
        int n = 1;
        ListNode* result = solution.removeNthFromEnd(head, n);
        assert((listToVector(result) == vector<int>{1}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
