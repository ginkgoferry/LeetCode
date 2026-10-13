/*
 * Problem: 188. 买卖股票的最佳时机 IV / Best Time to Buy and Sell Stock IV
 * Link: https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-iv/
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
    int maxProfit(int k, vector<int>& prices) {
        // TODO: 在这里实现你的解法。
        (void)k;
        (void)prices;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int k = 2;
        vector<int> prices = {2, 4, 1};
        auto localResult = solution.maxProfit(k, prices);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 2;
        vector<int> prices = {3, 2, 6, 5, 0, 3};
        auto localResult = solution.maxProfit(k, prices);
        int expected = 7;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
