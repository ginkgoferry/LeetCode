/*
 * Problem: 1584. 连接所有点的最小费用 / Min Cost to Connect All Points
 * Link: https://leetcode.cn/problems/min-cost-to-connect-all-points/
 * Chapter: 图论
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
    int minCostConnectPoints(vector<vector<int>>& points) {
        // TODO: 在这里实现你的解法。
        (void)points;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> points = {{0, 0}, {2, 2}, {3, 10}, {5, 2}, {7, 0}};
        auto localResult = solution.minCostConnectPoints(points);
        int expected = 20;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> points = {{3, 12}, {-2, 5}, {-4, 1}};
        auto localResult = solution.minCostConnectPoints(points);
        int expected = 18;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> points = {{0, 0}, {1, 1}, {1, 0}, {-1, 1}};
        auto localResult = solution.minCostConnectPoints(points);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> points = {{-1000000, -1000000}, {1000000, 1000000}};
        auto localResult = solution.minCostConnectPoints(points);
        int expected = 4000000;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> points = {{0, 0}};
        auto localResult = solution.minCostConnectPoints(points);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
