/*
 * Problem: 3573. 买卖股票的最佳时机 V / Best Time to Buy and Sell Stock V
 * Link: https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-v/
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
    long long maximumProfit(vector<int>& prices, int k) {
        // TODO: 在这里实现你的解法。
        (void)prices;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> prices = {1, 7, 9, 8, 2};
        int k = 2;
        auto localResult = solution.maximumProfit(prices, k);
        long long expected = 14LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> prices = {12, 16, 19, 19, 8, 1, 19, 13, 9};
        int k = 3;
        auto localResult = solution.maximumProfit(prices, k);
        long long expected = 36LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
