/*
 * Problem: 25. K 个一组翻转链表 / Reverse Nodes in k-Group
 * Link: https://leetcode.cn/problems/reverse-nodes-in-k-group/
 * Chapter: 链表
 * Difficulty: Hard
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
    ListNode* reverseKGroup(ListNode* head, int k) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        ListNode* head = buildList(vector<int>{1, 2, 3, 4, 5});
        int k = 2;
        ListNode* result = solution.reverseKGroup(head, k);
        assert((listToVector(result) == vector<int>{2, 1, 4, 3, 5}));
    }

    {
        ListNode* head = buildList(vector<int>{1, 2, 3, 4, 5});
        int k = 3;
        ListNode* result = solution.reverseKGroup(head, k);
        assert((listToVector(result) == vector<int>{3, 2, 1, 4, 5}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
