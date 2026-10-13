/*
 * Problem: 1483. 树节点的第 K 个祖先 / Kth Ancestor of a Tree Node
 * Link: https://leetcode.cn/problems/kth-ancestor-of-a-tree-node/
 * Chapter: 树与回溯
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

class TreeAncestor {
public:
    TreeAncestor(int n, vector<int>& parent) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)parent;
    }
    
    int getKthAncestor(int node, int k) {
        // TODO: 在这里实现你的解法。
        (void)node;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        int n = 7;
        vector<int> parent = {-1, 0, 0, 1, 1, 2, 2};
        TreeAncestor localObject(n, parent);
        {
            int node = 3;
            int k = 1;
            auto localResult = localObject.getKthAncestor(node, k);
            int expected = 1;
            assert((localResult == expected));
        }
        {
            int node = 5;
            int k = 2;
            auto localResult = localObject.getKthAncestor(node, k);
            int expected = 0;
            assert((localResult == expected));
        }
        {
            int node = 6;
            int k = 3;
            auto localResult = localObject.getKthAncestor(node, k);
            int expected = -1;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
