/*
 * Problem: 2162. 设置时间的最少代价 / Minimum Cost to Set Cooking Time
 * Link: https://leetcode.cn/problems/minimum-cost-to-set-cooking-time/
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
    int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds) {
        // TODO: 在这里实现你的解法。
        (void)startAt;
        (void)moveCost;
        (void)pushCost;
        (void)targetSeconds;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int startAt = 1;
        int moveCost = 2;
        int pushCost = 1;
        int targetSeconds = 600;
        auto localResult = solution.minCostSetTime(startAt, moveCost, pushCost, targetSeconds);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int startAt = 0;
        int moveCost = 1;
        int pushCost = 2;
        int targetSeconds = 76;
        auto localResult = solution.minCostSetTime(startAt, moveCost, pushCost, targetSeconds);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
