/*
 * Problem: 3543. K 条边路径的最大边权和 / Maximum Weighted K-Edge Path
 * Link: https://leetcode.cn/problems/maximum-weighted-k-edge-path/
 * Chapter: 动态规划
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
    int maxWeight(int n, vector<vector<int>>& edges, int k, int t) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)k;
        (void)t;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1, 1}, {1, 2, 2}};
        int k = 2;
        int t = 4;
        auto localResult = solution.maxWeight(n, edges, k, t);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1, 2}, {0, 2, 3}};
        int k = 1;
        int t = 3;
        auto localResult = solution.maxWeight(n, edges, k, t);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1, 6}, {1, 2, 8}};
        int k = 1;
        int t = 6;
        auto localResult = solution.maxWeight(n, edges, k, t);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
