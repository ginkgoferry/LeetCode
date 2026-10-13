/*
 * Problem: 1235. 规划兼职工作 / Maximum Profit in Job Scheduling
 * Link: https://leetcode.cn/problems/maximum-profit-in-job-scheduling/
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
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        // TODO: 在这里实现你的解法。
        (void)startTime;
        (void)endTime;
        (void)profit;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> startTime = {1, 2, 3, 3};
        vector<int> endTime = {3, 4, 5, 6};
        vector<int> profit = {50, 10, 40, 70};
        auto localResult = solution.jobScheduling(startTime, endTime, profit);
        int expected = 120;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> startTime = {1, 2, 3, 4, 6};
        vector<int> endTime = {3, 5, 10, 6, 9};
        vector<int> profit = {20, 20, 100, 70, 60};
        auto localResult = solution.jobScheduling(startTime, endTime, profit);
        int expected = 150;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> startTime = {1, 1, 1};
        vector<int> endTime = {2, 3, 4};
        vector<int> profit = {5, 6, 4};
        auto localResult = solution.jobScheduling(startTime, endTime, profit);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
