/*
 * Problem: 2858. 可以到达每一个节点的最少边反转次数 / Minimum Edge Reversals So Every Node Is Reachable
 * Link: https://leetcode.cn/problems/minimum-edge-reversals-so-every-node-is-reachable/
 * Chapter: 动态规划
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
    vector<int> minEdgeReversals(int n, vector<vector<int>>& edges) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> edges = {{2, 0}, {2, 1}, {1, 3}};
        auto localResult = solution.minEdgeReversals(n, edges);
        vector<int> expected = {1, 1, 0, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{1, 2}, {2, 0}};
        auto localResult = solution.minEdgeReversals(n, edges);
        vector<int> expected = {2, 0, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
