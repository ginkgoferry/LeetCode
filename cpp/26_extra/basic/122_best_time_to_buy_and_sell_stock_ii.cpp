/*
 * Problem: 122. 买卖股票的最佳时机 II / Best Time to Buy and Sell Stock II
 * Link: https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-ii/
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
        vector<int> prices = {7, 1, 5, 3, 6, 4};
        auto localResult = solution.maxProfit(prices);
        int expected = 7;
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

    cout << "All tests passed.\n";
    return 0;
}
#endif
