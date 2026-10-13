/*
 * Problem: 2203. 包含要求路径的最小带权子图 / Minimum Weighted Subgraph With the Required Paths
 * Link: https://leetcode.cn/problems/minimum-weighted-subgraph-with-the-required-paths/
 * Chapter: 图论
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
    long long minimumWeight(int n, vector<vector<int>>& edges, int src1, int src2, int dest) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)src1;
        (void)src2;
        (void)dest;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 6;
        vector<vector<int>> edges = {{0, 2, 2}, {0, 5, 6}, {1, 0, 3}, {1, 4, 5}, {2, 1, 1}, {2, 3, 3}, {2, 3, 4}, {3, 4, 2}, {4, 5, 1}};
        int src1 = 0;
        int src2 = 1;
        int dest = 5;
        auto localResult = solution.minimumWeight(n, edges, src1, src2, dest);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1, 1}, {2, 1, 1}};
        int src1 = 0;
        int src2 = 1;
        int dest = 2;
        auto localResult = solution.minimumWeight(n, edges, src1, src2, dest);
        long long expected = -1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
