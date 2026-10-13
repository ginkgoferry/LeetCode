/*
 * Problem: 1964. 找出到每个位置为止最长的有效障碍赛跑路线 / Find the Longest Valid Obstacle Course at Each Position
 * Link: https://leetcode.cn/problems/find-the-longest-valid-obstacle-course-at-each-position/
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
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        // TODO: 在这里实现你的解法。
        (void)obstacles;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> obstacles = {1, 2, 3, 2};
        auto localResult = solution.longestObstacleCourseAtEachPosition(obstacles);
        vector<int> expected = {1, 2, 3, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> obstacles = {2, 2, 1};
        auto localResult = solution.longestObstacleCourseAtEachPosition(obstacles);
        vector<int> expected = {1, 2, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> obstacles = {3, 1, 5, 6, 4, 2};
        auto localResult = solution.longestObstacleCourseAtEachPosition(obstacles);
        vector<int> expected = {1, 1, 2, 3, 2, 2};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
