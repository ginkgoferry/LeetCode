/*
 * Problem: 3439. 重新安排会议得到最多空余时间 I / Reschedule Meetings for Maximum Free Time I
 * Link: https://leetcode.cn/problems/reschedule-meetings-for-maximum-free-time-i/
 * Chapter: 滑动窗口
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
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        // TODO: 在这里实现你的解法。
        (void)eventTime;
        (void)k;
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
        int k = 1;
        vector<int> startTime = {1, 3};
        vector<int> endTime = {2, 5};
        auto localResult = solution.maxFreeTime(eventTime, k, startTime, endTime);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int eventTime = 10;
        int k = 1;
        vector<int> startTime = {0, 2, 9};
        vector<int> endTime = {1, 4, 10};
        auto localResult = solution.maxFreeTime(eventTime, k, startTime, endTime);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int eventTime = 5;
        int k = 2;
        vector<int> startTime = {0, 1, 2, 3, 4};
        vector<int> endTime = {1, 2, 3, 4, 5};
        auto localResult = solution.maxFreeTime(eventTime, k, startTime, endTime);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
