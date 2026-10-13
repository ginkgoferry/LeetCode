/*
 * Problem: 817. 链表组件 / Linked List Components
 * Link: https://leetcode.cn/problems/linked-list-components/
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
    int numComponents(ListNode* head, vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)head;
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{0, 1, 2, 3});
        collectListNodes(head, localOwnedLists);
        vector<int> nums = {0, 1, 3};
        auto localResult = solution.numComponents(head, nums);
        int expected = 2;
        assert((localResult == expected));
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{0, 1, 2, 3, 4});
        collectListNodes(head, localOwnedLists);
        vector<int> nums = {0, 3, 1, 4};
        auto localResult = solution.numComponents(head, nums);
        int expected = 2;
        assert((localResult == expected));
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
