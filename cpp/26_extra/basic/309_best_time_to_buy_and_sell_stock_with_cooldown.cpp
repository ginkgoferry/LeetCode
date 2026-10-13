/*
 * Problem: 309. 买卖股票的最佳时机含冷冻期 / Best Time to Buy and Sell Stock with Cooldown
 * Link: https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-with-cooldown/
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
    int maxProfit(vector<int>& prices) {
        // TODO: 在这里实现你的解法。
        (void)prices;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> prices = {1, 2, 3, 0, 2};
        auto localResult = solution.maxProfit(prices);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> prices = {1};
        auto localResult = solution.maxProfit(prices);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
