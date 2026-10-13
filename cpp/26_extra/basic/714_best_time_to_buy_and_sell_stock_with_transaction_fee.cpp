/*
 * Problem: 714. 买卖股票的最佳时机含手续费 / Best Time to Buy and Sell Stock with Transaction Fee
 * Link: https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
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
    int maxProfit(vector<int>& prices, int fee) {
        // TODO: 在这里实现你的解法。
        (void)prices;
        (void)fee;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> prices = {1, 3, 2, 8, 4, 9};
        int fee = 2;
        auto localResult = solution.maxProfit(prices, fee);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> prices = {1, 3, 7, 5, 10, 3};
        int fee = 3;
        auto localResult = solution.maxProfit(prices, fee);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
