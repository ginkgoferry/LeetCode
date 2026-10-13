/*
 * Problem: 109. 有序链表转换二叉搜索树 / Convert Sorted List to Binary Search Tree
 * Link: https://leetcode.cn/problems/convert-sorted-list-to-binary-search-tree/
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
    TreeNode* sortedListToBST(ListNode* head) {
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
        unordered_set<TreeNode*> localOwnedTrees;
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{-10, -3, 0, 5, 9});
        collectListNodes(head, localOwnedLists);
        auto localResult = solution.sortedListToBST(head);
        vector<optional<int>> expected = {0, -3, 9, -10, nullopt, 5};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{});
        collectListNodes(head, localOwnedLists);
        auto localResult = solution.sortedListToBST(head);
        vector<optional<int>> expected = {};
        assert((treeToVector(localResult) == expected));
        collectTreeNodes(localResult, localOwnedTrees);
        for (TreeNode* node : localOwnedTrees) delete node;
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
