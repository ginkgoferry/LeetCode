/*
 * Problem: 445. 两数相加 II / Add Two Numbers II
 * Link: https://leetcode.cn/problems/add-two-numbers-ii/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // TODO: 在这里实现你的解法。
        (void)l1;
        (void)l2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* l1 = buildList(vector<int>{7, 2, 4, 3});
        collectListNodes(l1, localOwnedLists);
        ListNode* l2 = buildList(vector<int>{5, 6, 4});
        collectListNodes(l2, localOwnedLists);
        auto localResult = solution.addTwoNumbers(l1, l2);
        vector<int> expected = {7, 8, 0, 7};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* l1 = buildList(vector<int>{2, 4, 3});
        collectListNodes(l1, localOwnedLists);
        ListNode* l2 = buildList(vector<int>{5, 6, 4});
        collectListNodes(l2, localOwnedLists);
        auto localResult = solution.addTwoNumbers(l1, l2);
        vector<int> expected = {8, 0, 7};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* l1 = buildList(vector<int>{0});
        collectListNodes(l1, localOwnedLists);
        ListNode* l2 = buildList(vector<int>{0});
        collectListNodes(l2, localOwnedLists);
        auto localResult = solution.addTwoNumbers(l1, l2);
        vector<int> expected = {0};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
