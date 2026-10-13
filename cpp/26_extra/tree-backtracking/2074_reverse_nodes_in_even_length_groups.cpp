/*
 * Problem: 2074. 反转偶数长度组的节点 / Reverse Nodes in Even Length Groups
 * Link: https://leetcode.cn/problems/reverse-nodes-in-even-length-groups/
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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
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
        ListNode* head = buildList(vector<int>{5, 2, 6, 3, 9, 1, 7, 3, 8, 4});
        collectListNodes(head, localOwnedLists);
        auto localResult = solution.reverseEvenLengthGroups(head);
        vector<int> expected = {5, 6, 2, 3, 9, 1, 4, 8, 3, 7};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{1, 1, 0, 6});
        collectListNodes(head, localOwnedLists);
        auto localResult = solution.reverseEvenLengthGroups(head);
        vector<int> expected = {1, 0, 1, 6};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{2, 1});
        collectListNodes(head, localOwnedLists);
        auto localResult = solution.reverseEvenLengthGroups(head);
        vector<int> expected = {2, 1};
        assert((listToVector(localResult) == expected));
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
