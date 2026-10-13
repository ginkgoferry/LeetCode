/*
 * Problem: 435. 无重叠区间 / Non-overlapping Intervals
 * Link: https://leetcode.cn/problems/non-overlapping-intervals/
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
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // TODO: 在这里实现你的解法。
        (void)intervals;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> intervals = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
        auto localResult = solution.eraseOverlapIntervals(intervals);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> intervals = {{1, 2}, {1, 2}, {1, 2}};
        auto localResult = solution.eraseOverlapIntervals(intervals);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> intervals = {{1, 2}, {2, 3}};
        auto localResult = solution.eraseOverlapIntervals(intervals);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
