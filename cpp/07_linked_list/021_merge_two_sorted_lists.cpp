/*
 * Problem: 21. 合并两个有序链表 / Merge Two Sorted Lists
 * Link: https://leetcode.cn/problems/merge-two-sorted-lists/
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        ListNode* list1 = buildList(vector<int>{1, 2, 4});
        ListNode* list2 = buildList(vector<int>{1, 3, 4});
        ListNode* result = solution.mergeTwoLists(list1, list2);
        assert((listToVector(result) == vector<int>{1, 1, 2, 3, 4, 4}));
    }

    {
        ListNode* list1 = buildList(vector<int>{});
        ListNode* list2 = buildList(vector<int>{});
        ListNode* result = solution.mergeTwoLists(list1, list2);
        assert((listToVector(result) == vector<int>{}));
    }

    {
        ListNode* list1 = buildList(vector<int>{});
        ListNode* list2 = buildList(vector<int>{0});
        ListNode* result = solution.mergeTwoLists(list1, list2);
        assert((listToVector(result) == vector<int>{0}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
