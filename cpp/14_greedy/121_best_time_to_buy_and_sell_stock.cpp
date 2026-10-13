/*
 * Problem: 121. 买卖股票的最佳时机 / Best Time to Buy and Sell Stock
 * Link: https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/
 * Chapter: 贪心算法
 * Difficulty: Easy
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
        vector<int> prices = {7, 1, 5, 3, 6, 4};
        assert((solution.maxProfit(prices) == 5));
    }

    {
        vector<int> prices = {7, 6, 4, 3, 1};
        assert((solution.maxProfit(prices) == 0));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
