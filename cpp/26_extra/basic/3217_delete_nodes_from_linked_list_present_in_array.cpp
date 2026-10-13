/*
 * Problem: 3217. 从链表中移除在数组中存在的节点 / Delete Nodes From Linked List Present in Array
 * Link: https://leetcode.cn/problems/delete-nodes-from-linked-list-present-in-array/
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        // TODO: 在这里实现你的解法。
        (void)nums;
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
        vector<int> nums = {1, 2, 3};
        ListNode* head = buildList(vector<int>{1, 2, 3, 4, 5});
        collectListNodes(head, localOwnedLists);
        auto localResult = solution.modifiedList(nums, head);
        vector<int> expected = {4, 5};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        vector<int> nums = {1};
        ListNode* head = buildList(vector<int>{1, 2, 1, 2, 1, 2});
        collectListNodes(head, localOwnedLists);
        auto localResult = solution.modifiedList(nums, head);
        vector<int> expected = {2, 2, 2};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        vector<int> nums = {5};
        ListNode* head = buildList(vector<int>{1, 2, 3, 4});
        collectListNodes(head, localOwnedLists);
        auto localResult = solution.modifiedList(nums, head);
        vector<int> expected = {1, 2, 3, 4};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
