/*
 * Problem: 3373. 连接两棵树后最大目标节点数目 II / Maximize the Number of Target Nodes After Connecting Trees II
 * Link: https://leetcode.cn/problems/maximize-the-number-of-target-nodes-after-connecting-trees-ii/
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
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        // TODO: 在这里实现你的解法。
        (void)edges1;
        (void)edges2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> edges1 = {{0, 1}, {0, 2}, {2, 3}, {2, 4}};
        vector<vector<int>> edges2 = {{0, 1}, {0, 2}, {0, 3}, {2, 7}, {1, 4}, {4, 5}, {4, 6}};
        auto localResult = solution.maxTargetNodes(edges1, edges2);
        vector<int> expected = {8, 7, 7, 8, 8};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges1 = {{0, 1}, {0, 2}, {0, 3}, {0, 4}};
        vector<vector<int>> edges2 = {{0, 1}, {1, 2}, {2, 3}};
        auto localResult = solution.maxTargetNodes(edges1, edges2);
        vector<int> expected = {3, 6, 6, 6, 6};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
