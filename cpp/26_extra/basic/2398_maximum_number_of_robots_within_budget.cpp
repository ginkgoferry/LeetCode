/*
 * Problem: 2398. 预算内的最多机器人数目 / Maximum Number of Robots Within Budget
 * Link: https://leetcode.cn/problems/maximum-number-of-robots-within-budget/
 * Chapter: 数据结构
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
    int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {
        // TODO: 在这里实现你的解法。
        (void)chargeTimes;
        (void)runningCosts;
        (void)budget;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> chargeTimes = {3, 6, 1, 3, 4};
        vector<int> runningCosts = {2, 1, 3, 4, 5};
        long long budget = 25LL;
        auto localResult = solution.maximumRobots(chargeTimes, runningCosts, budget);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> chargeTimes = {11, 12, 19};
        vector<int> runningCosts = {10, 8, 7};
        long long budget = 19LL;
        auto localResult = solution.maximumRobots(chargeTimes, runningCosts, budget);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
