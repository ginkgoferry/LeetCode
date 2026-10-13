/*
 * Problem: 148. 排序链表 / Sort List
 * Link: https://leetcode.cn/problems/sort-list/
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
    ListNode* sortList(ListNode* head) {
        // TODO: 在这里实现你的解法。
        (void)head;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        ListNode* head = buildList(vector<int>{4, 2, 1, 3});
        ListNode* result = solution.sortList(head);
        assert((listToVector(result) == vector<int>{1, 2, 3, 4}));
    }

    {
        ListNode* head = buildList(vector<int>{-1, 5, 3, 4, 0});
        ListNode* result = solution.sortList(head);
        assert((listToVector(result) == vector<int>{-1, 0, 3, 4, 5}));
    }

    {
        ListNode* head = buildList(vector<int>{});
        ListNode* result = solution.sortList(head);
        assert((listToVector(result) == vector<int>{}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
