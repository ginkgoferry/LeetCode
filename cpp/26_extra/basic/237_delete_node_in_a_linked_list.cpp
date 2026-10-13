/*
 * Problem: 237. 删除链表中的节点 / Delete Node in a Linked List
 * Link: https://leetcode.cn/problems/delete-node-in-a-linked-list/
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
    void deleteNode(ListNode* node) {
        // TODO: 在这里实现你的解法。
        (void)node;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{4, 5, 1, 9});
        collectListNodes(head, localOwnedLists);
        ListNode* localTarget = head;
        while (localTarget && localTarget->val != 5) localTarget = localTarget->next;
        assert(localTarget && localTarget->next);
        solution.deleteNode(localTarget);
        vector<int> expected = {4, 1, 9};
        assert((listToVector(head) == expected));
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{4, 5, 1, 9});
        collectListNodes(head, localOwnedLists);
        ListNode* localTarget = head;
        while (localTarget && localTarget->val != 1) localTarget = localTarget->next;
        assert(localTarget && localTarget->next);
        solution.deleteNode(localTarget);
        vector<int> expected = {4, 5, 9};
        assert((listToVector(head) == expected));
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
