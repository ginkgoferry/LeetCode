/*
 * Problem: 23. 合并 K 个升序链表 / Merge k Sorted Lists
 * Link: https://leetcode.cn/problems/merge-k-sorted-lists/
 * Chapter: 链表
 * Difficulty: Hard
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


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<ListNode*> lists = buildLists(vector<vector<int>>{{1, 4, 5}, {1, 3, 4}, {2, 6}});
        ListNode* result = solution.mergeKLists(lists);
        assert((listToVector(result) == vector<int>{1, 1, 2, 3, 4, 4, 5, 6}));
    }

    {
        vector<ListNode*> lists = buildLists(vector<vector<int>>{});
        ListNode* result = solution.mergeKLists(lists);
        assert((listToVector(result) == vector<int>{}));
    }

    {
        vector<ListNode*> lists = buildLists(vector<vector<int>>{{}});
        ListNode* result = solution.mergeKLists(lists);
        assert((listToVector(result) == vector<int>{}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
