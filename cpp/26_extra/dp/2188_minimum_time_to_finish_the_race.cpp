/*
 * Problem: 2188. 完成比赛的最少时间 / Minimum Time to Finish the Race
 * Link: https://leetcode.cn/problems/minimum-time-to-finish-the-race/
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
    int minimumFinishTime(vector<vector<int>>& tires, int changeTime, int numLaps) {
        // TODO: 在这里实现你的解法。
        (void)tires;
        (void)changeTime;
        (void)numLaps;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> tires = {{2, 3}, {3, 4}};
        int changeTime = 5;
        int numLaps = 4;
        auto localResult = solution.minimumFinishTime(tires, changeTime, numLaps);
        int expected = 21;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> tires = {{1, 10}, {2, 2}, {3, 4}};
        int changeTime = 6;
        int numLaps = 5;
        auto localResult = solution.minimumFinishTime(tires, changeTime, numLaps);
        int expected = 25;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
