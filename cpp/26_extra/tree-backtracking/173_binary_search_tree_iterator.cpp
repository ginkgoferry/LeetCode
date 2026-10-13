/*
 * Problem: 173. 二叉搜索树迭代器 / Binary Search Tree Iterator
 * Link: https://leetcode.cn/problems/binary-search-tree-iterator/
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

class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
        // TODO: 在这里实现你的解法。
        (void)root;
    }
    
    int next() {
        // TODO: 在这里实现你的解法。
        return {};
    }
    
    bool hasNext() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{7, 3, 15, nullopt, nullopt, 9, 20});
        collectTreeNodes(root, localOwnedTrees);
        BSTIterator localObject(root);
        {
            auto localResult = localObject.next();
            int expected = 3;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.next();
            int expected = 7;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.hasNext();
            bool expected = true;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.next();
            int expected = 9;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.hasNext();
            bool expected = true;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.next();
            int expected = 15;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.hasNext();
            bool expected = true;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.next();
            int expected = 20;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.hasNext();
            bool expected = false;
            assert((localResult == expected));
        }
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
