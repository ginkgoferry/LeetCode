/*
 * Problem: 160. 相交链表 / Intersection of Two Linked Lists
 * Link: https://leetcode.cn/problems/intersection-of-two-linked-lists/
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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        auto data = buildIntersectingLists(vector<int>{4, 1, 8, 4, 5}, vector<int>{5, 6, 1, 8, 4, 5}, 2, 3);
        ListNode* headA = data.first.first;
        ListNode* headB = data.first.second;
        assert((solution.getIntersectionNode(headA, headB) == data.second));
    }
    {
        auto data = buildIntersectingLists(vector<int>{1, 9, 1, 2, 4}, vector<int>{3, 2, 4}, 3, 1);
        ListNode* headA = data.first.first;
        ListNode* headB = data.first.second;
        assert((solution.getIntersectionNode(headA, headB) == data.second));
    }
    {
        auto data = buildIntersectingLists(vector<int>{2, 6, 4}, vector<int>{1, 5}, 3, 2);
        ListNode* headA = data.first.first;
        ListNode* headB = data.first.second;
        assert((solution.getIntersectionNode(headA, headB) == nullptr));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
