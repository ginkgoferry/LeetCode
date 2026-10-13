/*
 * Problem: 3414. 不重叠区间的最大得分 / Maximum Score of Non-overlapping Intervals
 * Link: https://leetcode.cn/problems/maximum-score-of-non-overlapping-intervals/
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
    vector<int> maximumWeight(vector<vector<int>>& intervals) {
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
        vector<vector<int>> intervals = {{1, 3, 2}, {4, 5, 2}, {1, 5, 5}, {6, 9, 3}, {6, 7, 1}, {8, 9, 1}};
        auto localResult = solution.maximumWeight(intervals);
        vector<int> expected = {2, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> intervals = {{5, 8, 1}, {6, 7, 7}, {4, 7, 3}, {9, 10, 6}, {7, 8, 2}, {11, 14, 3}, {3, 5, 5}};
        auto localResult = solution.maximumWeight(intervals);
        vector<int> expected = {1, 3, 5, 6};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
