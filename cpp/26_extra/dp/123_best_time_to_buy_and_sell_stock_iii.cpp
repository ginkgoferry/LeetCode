/*
 * Problem: 123. 买卖股票的最佳时机 III / Best Time to Buy and Sell Stock III
 * Link: https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-iii/
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
        vector<int> prices = {3, 3, 5, 0, 0, 3, 1, 4};
        auto localResult = solution.maxProfit(prices);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> prices = {1, 2, 3, 4, 5};
        auto localResult = solution.maxProfit(prices);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> prices = {7, 6, 4, 3, 1};
        auto localResult = solution.maxProfit(prices);
        int expected = 0;
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
