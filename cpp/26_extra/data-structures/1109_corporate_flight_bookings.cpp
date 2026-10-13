/*
 * Problem: 1109. 航班预订统计 / Corporate Flight Bookings
 * Link: https://leetcode.cn/problems/corporate-flight-bookings/
 * Chapter: 数据结构
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
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        // TODO: 在这里实现你的解法。
        (void)bookings;
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> bookings = {{1, 2, 10}, {2, 3, 20}, {2, 5, 25}};
        int n = 5;
        auto localResult = solution.corpFlightBookings(bookings, n);
        vector<int> expected = {10, 55, 45, 25, 25};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> bookings = {{1, 2, 10}, {2, 2, 15}};
        int n = 2;
        auto localResult = solution.corpFlightBookings(bookings, n);
        vector<int> expected = {10, 25};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
