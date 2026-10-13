/*
 * Problem: 2816. 翻倍以链表形式表示的数字 / Double a Number Represented as a Linked List
 * Link: https://leetcode.cn/problems/double-a-number-represented-as-a-linked-list/
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
    ListNode* doubleIt(ListNode* head) {
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
        ListNode* head = buildList(vector<int>{1, 8, 9});
        collectListNodes(head, localOwnedLists);
        auto localResult = solution.doubleIt(head);
        vector<int> expected = {3, 7, 8};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{9, 9, 9});
        collectListNodes(head, localOwnedLists);
        auto localResult = solution.doubleIt(head);
        vector<int> expected = {1, 9, 9, 8};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
