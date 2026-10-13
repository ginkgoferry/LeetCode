/*
 * Problem: 143. 重排链表 / Reorder List
 * Link: https://leetcode.cn/problems/reorder-list/
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
    void reorderList(ListNode* head) {
        // TODO: 在这里实现你的解法。
        (void)head;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{1, 2, 3, 4});
        collectListNodes(head, localOwnedLists);
        solution.reorderList(head);
        vector<int> expected = {1, 4, 2, 3};
        assert((listToVector(head) == expected));
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{1, 2, 3, 4, 5});
        collectListNodes(head, localOwnedLists);
        solution.reorderList(head);
        vector<int> expected = {1, 5, 2, 4, 3};
        assert((listToVector(head) == expected));
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
