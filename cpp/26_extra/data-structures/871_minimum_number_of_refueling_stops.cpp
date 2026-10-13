/*
 * Problem: 871. 最低加油次数 / Minimum Number of Refueling Stops
 * Link: https://leetcode.cn/problems/minimum-number-of-refueling-stops/
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
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        // TODO: 在这里实现你的解法。
        (void)target;
        (void)startFuel;
        (void)stations;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int target = 1;
        int startFuel = 1;
        vector<vector<int>> stations = {};
        auto localResult = solution.minRefuelStops(target, startFuel, stations);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int target = 100;
        int startFuel = 1;
        vector<vector<int>> stations = {{10, 100}};
        auto localResult = solution.minRefuelStops(target, startFuel, stations);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int target = 100;
        int startFuel = 10;
        vector<vector<int>> stations = {{10, 60}, {20, 30}, {30, 30}, {60, 40}};
        auto localResult = solution.minRefuelStops(target, startFuel, stations);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
