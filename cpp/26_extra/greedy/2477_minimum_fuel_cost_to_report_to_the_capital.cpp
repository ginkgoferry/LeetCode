/*
 * Problem: 2477. 到达首都的最少油耗 / Minimum Fuel Cost to Report to the Capital
 * Link: https://leetcode.cn/problems/minimum-fuel-cost-to-report-to-the-capital/
 * Chapter: 贪心算法
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
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        // TODO: 在这里实现你的解法。
        (void)roads;
        (void)seats;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> roads = {{0, 1}, {0, 2}, {0, 3}};
        int seats = 5;
        auto localResult = solution.minimumFuelCost(roads, seats);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> roads = {{3, 1}, {3, 2}, {1, 0}, {0, 4}, {0, 5}, {4, 6}};
        int seats = 2;
        auto localResult = solution.minimumFuelCost(roads, seats);
        long long expected = 7LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> roads = {};
        int seats = 1;
        auto localResult = solution.minimumFuelCost(roads, seats);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
