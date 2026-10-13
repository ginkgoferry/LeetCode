/*
 * Problem: 1261. 在受污染的二叉树中查找元素 / Find Elements in a Contaminated Binary Tree
 * Link: https://leetcode.cn/problems/find-elements-in-a-contaminated-binary-tree/
 * Chapter: 位运算
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

class FindElements {
public:
    FindElements(TreeNode* root) {
        // TODO: 在这里实现你的解法。
        (void)root;
    }
    
    bool find(int target) {
        // TODO: 在这里实现你的解法。
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{-1, nullopt, -1});
        collectTreeNodes(root, localOwnedTrees);
        FindElements localObject(root);
        {
            int target = 1;
            auto localResult = localObject.find(target);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            int target = 2;
            auto localResult = localObject.find(target);
            bool expected = true;
            assert((localResult == expected));
        }
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方操作序列
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{-1, -1, -1, -1, -1});
        collectTreeNodes(root, localOwnedTrees);
        FindElements localObject(root);
        {
            int target = 1;
            auto localResult = localObject.find(target);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int target = 3;
            auto localResult = localObject.find(target);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int target = 5;
            auto localResult = localObject.find(target);
            bool expected = false;
            assert((localResult == expected));
        }
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    {
        // 官方操作序列
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{-1, nullopt, -1, -1, nullopt, -1});
        collectTreeNodes(root, localOwnedTrees);
        FindElements localObject(root);
        {
            int target = 2;
            auto localResult = localObject.find(target);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            int target = 3;
            auto localResult = localObject.find(target);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            int target = 4;
            auto localResult = localObject.find(target);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            int target = 5;
            auto localResult = localObject.find(target);
            bool expected = true;
            assert((localResult == expected));
        }
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
