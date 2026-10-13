/*
 * Problem: 746. 使用最小花费爬楼梯 / Min Cost Climbing Stairs
 * Link: https://leetcode.cn/problems/min-cost-climbing-stairs/
 * Chapter: 动态规划
 * Difficulty: Easy
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
    int minCostClimbingStairs(vector<int>& cost) {
        // TODO: 在这里实现你的解法。
        (void)cost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> cost = {10, 15, 20};
        auto localResult = solution.minCostClimbingStairs(cost);
        int expected = 15;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
        auto localResult = solution.minCostClimbingStairs(cost);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
