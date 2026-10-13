/*
 * Problem: 1367. 二叉树中的链表 / Linked List in Binary Tree
 * Link: https://leetcode.cn/problems/linked-list-in-binary-tree/
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
    bool isSubPath(ListNode* head, TreeNode* root) {
        // TODO: 在这里实现你的解法。
        (void)head;
        (void)root;
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
        ListNode* head = buildList(vector<int>{4, 2, 8});
        collectListNodes(head, localOwnedLists);
        TreeNode* root = buildTree(vector<optional<int>>{1, 4, 4, nullopt, 2, 2, nullopt, 1, nullopt, 6, 8, nullopt, nullopt, nullopt, nullopt, 1, 3});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.isSubPath(head, root);
        bool expected = true;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{1, 4, 2, 6});
        collectListNodes(head, localOwnedLists);
        TreeNode* root = buildTree(vector<optional<int>>{1, 4, 4, nullopt, 2, 2, nullopt, 1, nullopt, 6, 8, nullopt, nullopt, nullopt, nullopt, 1, 3});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.isSubPath(head, root);
        bool expected = true;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
        for (ListNode* node : localOwnedLists) delete node;
    }

    {
        // 官方样例
        unordered_set<TreeNode*> localOwnedTrees;
        unordered_set<ListNode*> localOwnedLists;
        ListNode* head = buildList(vector<int>{1, 4, 2, 6, 8});
        collectListNodes(head, localOwnedLists);
        TreeNode* root = buildTree(vector<optional<int>>{1, 4, 4, nullopt, 2, 2, nullopt, 1, nullopt, 6, 8, nullopt, nullopt, nullopt, nullopt, 1, 3});
        collectTreeNodes(root, localOwnedTrees);
        auto localResult = solution.isSubPath(head, root);
        bool expected = false;
        assert((localResult == expected));
        for (TreeNode* node : localOwnedTrees) delete node;
        for (ListNode* node : localOwnedLists) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
