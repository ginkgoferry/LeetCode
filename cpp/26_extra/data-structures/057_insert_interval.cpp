/*
 * Problem: 57. 插入区间 / Insert Interval
 * Link: https://leetcode.cn/problems/insert-interval/
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
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // TODO: 在这里实现你的解法。
        (void)intervals;
        (void)newInterval;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> intervals = {{1, 3}, {6, 9}};
        vector<int> newInterval = {2, 5};
        auto localResult = solution.insert(intervals, newInterval);
        vector<vector<int>> expected = {{1, 5}, {6, 9}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> intervals = {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
        vector<int> newInterval = {4, 8};
        auto localResult = solution.insert(intervals, newInterval);
        vector<vector<int>> expected = {{1, 2}, {3, 10}, {12, 16}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
