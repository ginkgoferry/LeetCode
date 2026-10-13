/*
 * Problem: 3429. 粉刷房子 IV / Paint House IV
 * Link: https://leetcode.cn/problems/paint-house-iv/
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
    long long minCost(int n, vector<vector<int>>& cost) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)cost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> cost = {{3, 5, 7}, {6, 2, 9}, {4, 8, 1}, {7, 3, 5}};
        auto localResult = solution.minCost(n, cost);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 6;
        vector<vector<int>> cost = {{2, 4, 6}, {5, 3, 8}, {7, 1, 9}, {4, 6, 2}, {3, 5, 7}, {8, 2, 4}};
        auto localResult = solution.minCost(n, cost);
        long long expected = 18LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
