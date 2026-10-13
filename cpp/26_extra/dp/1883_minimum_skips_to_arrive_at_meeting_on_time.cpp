/*
 * Problem: 1883. 准时抵达会议现场的最小跳过休息次数 / Minimum Skips to Arrive at Meeting On Time
 * Link: https://leetcode.cn/problems/minimum-skips-to-arrive-at-meeting-on-time/
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
    int minSkips(vector<int>& dist, int speed, int hoursBefore) {
        // TODO: 在这里实现你的解法。
        (void)dist;
        (void)speed;
        (void)hoursBefore;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> dist = {1, 3, 2};
        int speed = 4;
        int hoursBefore = 2;
        auto localResult = solution.minSkips(dist, speed, hoursBefore);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> dist = {7, 3, 5, 5};
        int speed = 2;
        int hoursBefore = 10;
        auto localResult = solution.minSkips(dist, speed, hoursBefore);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> dist = {7, 3, 5, 5};
        int speed = 1;
        int hoursBefore = 10;
        auto localResult = solution.minSkips(dist, speed, hoursBefore);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
