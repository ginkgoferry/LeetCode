/*
 * Problem: 919. 完全二叉树插入器 / Complete Binary Tree Inserter
 * Link: https://leetcode.cn/problems/complete-binary-tree-inserter/
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

class CBTInserter {
public:
    CBTInserter(TreeNode* root) {
        // TODO: 在这里实现你的解法。
        (void)root;
    }
    
    int insert(int val) {
        // TODO: 在这里实现你的解法。
        (void)val;
        return {};
    }
    
    TreeNode* get_root() {
        // TODO: 在这里实现你的解法。
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        unordered_set<TreeNode*> localOwnedTrees;
        TreeNode* root = buildTree(vector<optional<int>>{1, 2});
        collectTreeNodes(root, localOwnedTrees);
        CBTInserter localObject(root);
        {
            int val = 3;
            auto localResult = localObject.insert(val);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int val = 4;
            auto localResult = localObject.insert(val);
            int expected = 2;
            assert((localResult == expected));
        }
        {
            auto localResult = localObject.get_root();
            vector<optional<int>> expected{1, 2, 3, 4};
            collectTreeNodes(localResult, localOwnedTrees);
            assert((treeToVector(localResult) == expected));
        }
        for (TreeNode* node : localOwnedTrees) delete node;
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
