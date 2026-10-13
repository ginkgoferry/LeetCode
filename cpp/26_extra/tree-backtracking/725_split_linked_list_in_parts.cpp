/*
 * Problem: 725. 分隔链表 / Split Linked List in Parts
 * Link: https://leetcode.cn/problems/split-linked-list-in-parts/
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        // TODO: 在这里实现你的解法。
        (void)head;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{1, 2, 3});
        collectListNodes(head, localOwnedLists);
        int k = 5;
        auto localResult = solution.splitListToParts(head, k);
        vector<vector<int>> expected = {{1}, {2}, {3}, {}, {}};
        vector<vector<int>> observed;
        for (ListNode* localListPart : localResult) observed.push_back(listToVector(localListPart));
        assert((observed == expected));
        for (ListNode* localListPart : localResult) collectListNodes(localListPart, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
        collectListNodes(head, localOwnedLists);
        int k = 3;
        auto localResult = solution.splitListToParts(head, k);
        vector<vector<int>> expected = {{1, 2, 3, 4}, {5, 6, 7}, {8, 9, 10}};
        vector<vector<int>> observed;
        for (ListNode* localListPart : localResult) observed.push_back(listToVector(localListPart));
        assert((observed == expected));
        for (ListNode* localListPart : localResult) collectListNodes(localListPart, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
