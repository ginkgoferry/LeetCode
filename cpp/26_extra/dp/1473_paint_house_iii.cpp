/*
 * Problem: 1473. 粉刷房子 III / Paint House III
 * Link: https://leetcode.cn/problems/paint-house-iii/
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
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        // TODO: 在这里实现你的解法。
        (void)houses;
        (void)cost;
        (void)m;
        (void)n;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> houses = {0, 0, 0, 0, 0};
        vector<vector<int>> cost = {{1, 10}, {10, 1}, {10, 1}, {1, 10}, {5, 1}};
        int m = 5;
        int n = 2;
        int target = 3;
        auto localResult = solution.minCost(houses, cost, m, n, target);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> houses = {0, 2, 1, 2, 0};
        vector<vector<int>> cost = {{1, 10}, {10, 1}, {10, 1}, {1, 10}, {5, 1}};
        int m = 5;
        int n = 2;
        int target = 3;
        auto localResult = solution.minCost(houses, cost, m, n, target);
        int expected = 11;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> houses = {0, 0, 0, 0, 0};
        vector<vector<int>> cost = {{1, 10}, {10, 1}, {1, 10}, {10, 1}, {1, 10}};
        int m = 5;
        int n = 2;
        int target = 5;
        auto localResult = solution.minCost(houses, cost, m, n, target);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> houses = {3, 1, 2, 3};
        vector<vector<int>> cost = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
        int m = 4;
        int n = 3;
        int target = 3;
        auto localResult = solution.minCost(houses, cost, m, n, target);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
