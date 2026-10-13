/*
 * Problem: 4001. 聚合两个时间序列 / Aggregate Two Time Series
 * Link: https://leetcode.cn/problems/aggregate-two-time-series/
 * Chapter: 双指针
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
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        // TODO: 在这里实现你的解法。
        (void)series1;
        (void)series2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> series1 = {{1, 3}, {4, 1}};
        vector<vector<int>> series2 = {{2, 2}, {5, 2}};
        auto localResult = solution.aggregateTimeSeries(series1, series2);
        vector<vector<int>> expected = {{1, 5}, {2, 3}, {4, 3}, {5, 2}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> series1 = {{1, 5}, {3, 1}};
        vector<vector<int>> series2 = {{2, 2}};
        auto localResult = solution.aggregateTimeSeries(series1, series2);
        vector<vector<int>> expected = {{1, 7}, {2, 3}, {3, 1}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> series1 = {{1, 5}};
        vector<vector<int>> series2 = {{1000000000, 2}};
        auto localResult = solution.aggregateTimeSeries(series1, series2);
        vector<vector<int>> expected = {{1, 7}, {1000000000, 2}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
