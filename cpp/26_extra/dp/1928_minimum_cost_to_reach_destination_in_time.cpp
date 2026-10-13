/*
 * Problem: 1928. 规定时间内到达终点的最小花费 / Minimum Cost to Reach Destination in Time
 * Link: https://leetcode.cn/problems/minimum-cost-to-reach-destination-in-time/
 * Chapter: 图论
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
    int minCost(int maxTime, vector<vector<int>>& edges, vector<int>& passingFees) {
        // TODO: 在这里实现你的解法。
        (void)maxTime;
        (void)edges;
        (void)passingFees;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int maxTime = 30;
        vector<vector<int>> edges = {{0, 1, 10}, {1, 2, 10}, {2, 5, 10}, {0, 3, 1}, {3, 4, 10}, {4, 5, 15}};
        vector<int> passingFees = {5, 1, 2, 20, 20, 3};
        auto localResult = solution.minCost(maxTime, edges, passingFees);
        int expected = 11;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int maxTime = 29;
        vector<vector<int>> edges = {{0, 1, 10}, {1, 2, 10}, {2, 5, 10}, {0, 3, 1}, {3, 4, 10}, {4, 5, 15}};
        vector<int> passingFees = {5, 1, 2, 20, 20, 3};
        auto localResult = solution.minCost(maxTime, edges, passingFees);
        int expected = 48;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int maxTime = 25;
        vector<vector<int>> edges = {{0, 1, 10}, {1, 2, 10}, {2, 5, 10}, {0, 3, 1}, {3, 4, 10}, {4, 5, 15}};
        vector<int> passingFees = {5, 1, 2, 20, 20, 3};
        auto localResult = solution.minCost(maxTime, edges, passingFees);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
