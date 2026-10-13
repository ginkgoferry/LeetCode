/*
 * Problem: 3562. 折扣价交易股票的最大利润 / Maximum Profit from Trading Stocks with Discounts
 * Link: https://leetcode.cn/problems/maximum-profit-from-trading-stocks-with-discounts/
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
    int maxProfit(int n, vector<int>& present, vector<int>& future, vector<vector<int>>& hierarchy, int budget) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)present;
        (void)future;
        (void)hierarchy;
        (void)budget;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        vector<int> present = {1, 2};
        vector<int> future = {4, 3};
        vector<vector<int>> hierarchy = {{1, 2}};
        int budget = 3;
        auto localResult = solution.maxProfit(n, present, future, hierarchy, budget);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        vector<int> present = {3, 4};
        vector<int> future = {5, 8};
        vector<vector<int>> hierarchy = {{1, 2}};
        int budget = 4;
        auto localResult = solution.maxProfit(n, present, future, hierarchy, budget);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<int> present = {4, 6, 8};
        vector<int> future = {7, 9, 11};
        vector<vector<int>> hierarchy = {{1, 2}, {1, 3}};
        int budget = 10;
        auto localResult = solution.maxProfit(n, present, future, hierarchy, budget);
        int expected = 10;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<int> present = {5, 2, 3};
        vector<int> future = {8, 5, 6};
        vector<vector<int>> hierarchy = {{1, 2}, {2, 3}};
        int budget = 7;
        auto localResult = solution.maxProfit(n, present, future, hierarchy, budget);
        int expected = 12;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
