/*
 * Problem: 206. 反转链表 / Reverse Linked List
 * Link: https://leetcode.cn/problems/reverse-linked-list/
 * Chapter: 链表
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
    ListNode* reverseList(ListNode* head) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        ListNode* head = buildList(vector<int>{1, 2, 3, 4, 5});
        ListNode* result = solution.reverseList(head);
        assert((listToVector(result) == vector<int>{5, 4, 3, 2, 1}));
    }

    {
        ListNode* head = buildList(vector<int>{1, 2});
        ListNode* result = solution.reverseList(head);
        assert((listToVector(result) == vector<int>{2, 1}));
    }

    {
        ListNode* head = buildList(vector<int>{});
        ListNode* result = solution.reverseList(head);
        assert((listToVector(result) == vector<int>{}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
