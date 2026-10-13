/*
 * Problem: 92. 反转链表 II / Reverse Linked List II
 * Link: https://leetcode.cn/problems/reverse-linked-list-ii/
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // TODO: 在这里实现你的解法。
        (void)head;
        (void)left;
        (void)right;
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
        int left = 2;
        int right = 4;
        auto localResult = solution.reverseBetween(head, left, right);
        vector<int> expected = {1, 4, 3, 2, 5};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{5});
        collectListNodes(head, localOwnedLists);
        int left = 1;
        int right = 1;
        auto localResult = solution.reverseBetween(head, left, right);
        vector<int> expected = {5};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
