/*
 * Problem: 24. 两两交换链表中的节点 / Swap Nodes in Pairs
 * Link: https://leetcode.cn/problems/swap-nodes-in-pairs/
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
    ListNode* swapPairs(ListNode* head) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        ListNode* head = buildList(vector<int>{1, 2, 3, 4});
        ListNode* result = solution.swapPairs(head);
        assert((listToVector(result) == vector<int>{2, 1, 4, 3}));
    }

    {
        ListNode* head = buildList(vector<int>{});
        ListNode* result = solution.swapPairs(head);
        assert((listToVector(result) == vector<int>{}));
    }

    {
        ListNode* head = buildList(vector<int>{1});
        ListNode* result = solution.swapPairs(head);
        assert((listToVector(result) == vector<int>{1}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
