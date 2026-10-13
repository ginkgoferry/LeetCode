/*
 * Problem: 1019. 链表中的下一个更大节点 / Next Greater Node In Linked List
 * Link: https://leetcode.cn/problems/next-greater-node-in-linked-list/
 * Chapter: 栈
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
    vector<int> nextLargerNodes(ListNode* head) {
        // TODO: 在这里实现你的解法。
        (void)head;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{2, 1, 5});
        collectListNodes(head, localOwnedLists);
        auto localResult = solution.nextLargerNodes(head);
        vector<int> expected = {5, 5, 0};
        assert((localResult == expected));
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{2, 7, 4, 3, 5});
        collectListNodes(head, localOwnedLists);
        auto localResult = solution.nextLargerNodes(head);
        vector<int> expected = {7, 0, 5, 5, 0};
        assert((localResult == expected));
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
