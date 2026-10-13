/*
 * Problem: 1171. 从链表中删去总和值为零的连续节点 / Remove Zero Sum Consecutive Nodes from Linked List
 * Link: https://leetcode.cn/problems/remove-zero-sum-consecutive-nodes-from-linked-list/
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
    ListNode* removeZeroSumSublists(ListNode* head) {
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
        ListNode* head = buildList(vector<int>{1, 2, -3, 3, 1});
        collectListNodes(head, localOwnedLists);
        const auto localOriginalValues = listToVector(head);
        auto localResult = solution.removeZeroSumSublists(head);
        vector<int> observedValues; set<ListNode*> seenNodes;
        for (ListNode* current = localResult; current; current = current->next) {
            assert(seenNodes.insert(current).second); observedValues.push_back(current->val);
        }
        assert(observedValues.size() <= localOriginalValues.size());
        vector<long long> prefix(localOriginalValues.size() + 1);
        for (size_t i = 0; i < localOriginalValues.size(); ++i) prefix[i+1] = prefix[i] + localOriginalValues[i];
        vector<int> previous{-1};
        for (int value : observedValues) {
            vector<int> next; set<long long> reachableSums; size_t index = 0;
            for (int i = 0; i < static_cast<int>(localOriginalValues.size()); ++i) {
                while (index < previous.size() && previous[index] < i) reachableSums.insert(prefix[previous[index++] + 1]);
                if (localOriginalValues[i] == value && reachableSums.count(prefix[i])) next.push_back(i);
            }
            assert(!next.empty()); previous = std::move(next);
        }
        bool validDeletions = false;
        for (int position : previous) validDeletions |= prefix[position + 1] == prefix.back();
        assert(validDeletions);
        set<long long> partialSums{0}; long long total = 0;
        for (int value : observedValues) { total += value; assert(partialSums.insert(total).second); }
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{1, 2, 3, -3, 4});
        collectListNodes(head, localOwnedLists);
        const auto localOriginalValues = listToVector(head);
        auto localResult = solution.removeZeroSumSublists(head);
        vector<int> observedValues; set<ListNode*> seenNodes;
        for (ListNode* current = localResult; current; current = current->next) {
            assert(seenNodes.insert(current).second); observedValues.push_back(current->val);
        }
        assert(observedValues.size() <= localOriginalValues.size());
        vector<long long> prefix(localOriginalValues.size() + 1);
        for (size_t i = 0; i < localOriginalValues.size(); ++i) prefix[i+1] = prefix[i] + localOriginalValues[i];
        vector<int> previous{-1};
        for (int value : observedValues) {
            vector<int> next; set<long long> reachableSums; size_t index = 0;
            for (int i = 0; i < static_cast<int>(localOriginalValues.size()); ++i) {
                while (index < previous.size() && previous[index] < i) reachableSums.insert(prefix[previous[index++] + 1]);
                if (localOriginalValues[i] == value && reachableSums.count(prefix[i])) next.push_back(i);
            }
            assert(!next.empty()); previous = std::move(next);
        }
        bool validDeletions = false;
        for (int position : previous) validDeletions |= prefix[position + 1] == prefix.back();
        assert(validDeletions);
        set<long long> partialSums{0}; long long total = 0;
        for (int value : observedValues) { total += value; assert(partialSums.insert(total).second); }
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{1, 2, 3, -3, -2});
        collectListNodes(head, localOwnedLists);
        const auto localOriginalValues = listToVector(head);
        auto localResult = solution.removeZeroSumSublists(head);
        vector<int> observedValues; set<ListNode*> seenNodes;
        for (ListNode* current = localResult; current; current = current->next) {
            assert(seenNodes.insert(current).second); observedValues.push_back(current->val);
        }
        assert(observedValues.size() <= localOriginalValues.size());
        vector<long long> prefix(localOriginalValues.size() + 1);
        for (size_t i = 0; i < localOriginalValues.size(); ++i) prefix[i+1] = prefix[i] + localOriginalValues[i];
        vector<int> previous{-1};
        for (int value : observedValues) {
            vector<int> next; set<long long> reachableSums; size_t index = 0;
            for (int i = 0; i < static_cast<int>(localOriginalValues.size()); ++i) {
                while (index < previous.size() && previous[index] < i) reachableSums.insert(prefix[previous[index++] + 1]);
                if (localOriginalValues[i] == value && reachableSums.count(prefix[i])) next.push_back(i);
            }
            assert(!next.empty()); previous = std::move(next);
        }
        bool validDeletions = false;
        for (int position : previous) validDeletions |= prefix[position + 1] == prefix.back();
        assert(validDeletions);
        set<long long> partialSums{0}; long long total = 0;
        for (int value : observedValues) { total += value; assert(partialSums.insert(total).second); }
        collectListNodes(localResult, localOwnedLists);
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
