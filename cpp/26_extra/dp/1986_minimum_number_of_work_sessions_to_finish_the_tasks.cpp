/*
 * Problem: 1986. 完成任务的最少工作时间段 / Minimum Number of Work Sessions to Finish the Tasks
 * Link: https://leetcode.cn/problems/minimum-number-of-work-sessions-to-finish-the-tasks/
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
    int minSessions(vector<int>& tasks, int sessionTime) {
        // TODO: 在这里实现你的解法。
        (void)tasks;
        (void)sessionTime;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> tasks = {1, 2, 3};
        int sessionTime = 3;
        auto localResult = solution.minSessions(tasks, sessionTime);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> tasks = {3, 1, 3, 1, 1};
        int sessionTime = 8;
        auto localResult = solution.minSessions(tasks, sessionTime);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> tasks = {1, 2, 3, 4, 5};
        int sessionTime = 15;
        auto localResult = solution.minSessions(tasks, sessionTime);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
