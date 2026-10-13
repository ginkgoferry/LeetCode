/*
 * Problem: 3975. 筛选忙碌区间 / Filter Occupied Intervals
 * Link: https://leetcode.cn/problems/filter-occupied-intervals/
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
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        // TODO: 在这里实现你的解法。
        (void)occupiedIntervals;
        (void)freeStart;
        (void)freeEnd;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> occupiedIntervals = {{2, 6}, {4, 8}, {10, 10}, {10, 12}, {14, 16}};
        int freeStart = 7;
        int freeEnd = 11;
        auto localResult = solution.filterOccupiedIntervals(occupiedIntervals, freeStart, freeEnd);
        vector<vector<int>> expected = {{2, 6}, {12, 12}, {14, 16}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> occupiedIntervals = {{1, 5}, {2, 3}};
        int freeStart = 3;
        int freeEnd = 8;
        auto localResult = solution.filterOccupiedIntervals(occupiedIntervals, freeStart, freeEnd);
        vector<vector<int>> expected = {{1, 2}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
