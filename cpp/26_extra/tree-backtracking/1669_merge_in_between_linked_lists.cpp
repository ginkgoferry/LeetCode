/*
 * Problem: 1669. 合并两个链表 / Merge In Between Linked Lists
 * Link: https://leetcode.cn/problems/merge-in-between-linked-lists/
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        // TODO: 在这里实现你的解法。
        (void)list1;
        (void)a;
        (void)b;
        (void)list2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* list1 = buildList(vector<int>{10, 1, 13, 6, 9, 5});
        collectListNodes(list1, localOwnedLists);
        int a = 3;
        int b = 4;
        ListNode* list2 = buildList(vector<int>{1000000, 1000001, 1000002});
        collectListNodes(list2, localOwnedLists);
        auto localResult = solution.mergeInBetween(list1, a, b, list2);
        vector<int> expected = {10, 1, 13, 1000000, 1000001, 1000002, 5};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* list1 = buildList(vector<int>{0, 1, 2, 3, 4, 5, 6});
        collectListNodes(list1, localOwnedLists);
        int a = 2;
        int b = 5;
        ListNode* list2 = buildList(vector<int>{1000000, 1000001, 1000002, 1000003, 1000004});
        collectListNodes(list2, localOwnedLists);
        auto localResult = solution.mergeInBetween(list1, a, b, list2);
        vector<int> expected = {0, 1, 1000000, 1000001, 1000002, 1000003, 1000004, 6};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
