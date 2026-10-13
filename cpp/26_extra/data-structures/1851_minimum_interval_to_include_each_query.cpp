/*
 * Problem: 1851. 包含每个查询的最小区间 / Minimum Interval to Include Each Query
 * Link: https://leetcode.cn/problems/minimum-interval-to-include-each-query/
 * Chapter: 数据结构
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
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        // TODO: 在这里实现你的解法。
        (void)intervals;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> intervals = {{1, 4}, {2, 4}, {3, 6}, {4, 4}};
        vector<int> queries = {2, 3, 4, 5};
        auto localResult = solution.minInterval(intervals, queries);
        vector<int> expected = {3, 3, 1, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> intervals = {{2, 3}, {2, 5}, {1, 8}, {20, 25}};
        vector<int> queries = {2, 19, 5, 22};
        auto localResult = solution.minInterval(intervals, queries);
        vector<int> expected = {2, -1, 4, 6};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
