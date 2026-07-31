/*
 * Problem: 2. 两数相加 / Add Two Numbers
 * Link: https://leetcode.cn/problems/add-two-numbers/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        ListNode* l1 = buildList(vector<int>{2, 4, 3});
        ListNode* l2 = buildList(vector<int>{5, 6, 4});
        ListNode* result = solution.addTwoNumbers(l1, l2);
        assert((listToVector(result) == vector<int>{7, 0, 8}));
    }

    {
        ListNode* l1 = buildList(vector<int>{0});
        ListNode* l2 = buildList(vector<int>{0});
        ListNode* result = solution.addTwoNumbers(l1, l2);
        assert((listToVector(result) == vector<int>{0}));
    }

    {
        ListNode* l1 = buildList(vector<int>{9, 9, 9, 9, 9, 9, 9});
        ListNode* l2 = buildList(vector<int>{9, 9, 9, 9});
        ListNode* result = solution.addTwoNumbers(l1, l2);
        assert((listToVector(result) == vector<int>{8, 9, 9, 9, 0, 0, 0, 1}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
