/*
 * Problem: 2008. 出租车的最大盈利 / Maximum Earnings From Taxi
 * Link: https://leetcode.cn/problems/maximum-earnings-from-taxi/
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
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)rides;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> rides = {{2, 5, 4}, {1, 5, 1}};
        auto localResult = solution.maxTaxiEarnings(n, rides);
        long long expected = 7LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 20;
        vector<vector<int>> rides = {{1, 6, 1}, {3, 10, 2}, {10, 12, 3}, {11, 12, 2}, {12, 15, 2}, {13, 18, 1}};
        auto localResult = solution.maxTaxiEarnings(n, rides);
        long long expected = 20LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
