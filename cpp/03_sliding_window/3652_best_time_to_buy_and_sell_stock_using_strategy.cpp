/*
 * Problem: 3652. 按策略买卖股票的最佳时机 / Best Time to Buy and Sell Stock using Strategy
 * Link: https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-using-strategy/
 * Chapter: 滑动窗口
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
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        // TODO: 在这里实现你的解法。
        (void)prices;
        (void)strategy;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> prices = {4, 2, 8};
        vector<int> strategy = {-1, 0, 1};
        int k = 2;
        auto localResult = solution.maxProfit(prices, strategy, k);
        long long expected = 10LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> prices = {5, 4, 3};
        vector<int> strategy = {1, 1, 0};
        int k = 2;
        auto localResult = solution.maxProfit(prices, strategy, k);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
