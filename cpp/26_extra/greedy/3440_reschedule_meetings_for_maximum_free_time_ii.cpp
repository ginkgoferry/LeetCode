/*
 * Problem: 3440. 重新安排会议得到最多空余时间 II / Reschedule Meetings for Maximum Free Time II
 * Link: https://leetcode.cn/problems/reschedule-meetings-for-maximum-free-time-ii/
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
    int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
        // TODO: 在这里实现你的解法。
        (void)eventTime;
        (void)startTime;
        (void)endTime;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int eventTime = 5;
        vector<int> startTime = {1, 3};
        vector<int> endTime = {2, 5};
        auto localResult = solution.maxFreeTime(eventTime, startTime, endTime);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int eventTime = 10;
        vector<int> startTime = {0, 7, 9};
        vector<int> endTime = {1, 8, 10};
        auto localResult = solution.maxFreeTime(eventTime, startTime, endTime);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int eventTime = 10;
        vector<int> startTime = {0, 3, 7, 9};
        vector<int> endTime = {1, 4, 8, 10};
        auto localResult = solution.maxFreeTime(eventTime, startTime, endTime);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int eventTime = 5;
        vector<int> startTime = {0, 1, 2, 3, 4};
        vector<int> endTime = {1, 2, 3, 4, 5};
        auto localResult = solution.maxFreeTime(eventTime, startTime, endTime);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
