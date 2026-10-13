/*
 * Problem: 2944. 购买水果需要的最少金币数 / Minimum Number of Coins for Fruits
 * Link: https://leetcode.cn/problems/minimum-number-of-coins-for-fruits/
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
    int minimumCoins(vector<int>& prices) {
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
        vector<int> prices = {3, 1, 2};
        auto localResult = solution.minimumCoins(prices);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> prices = {1, 10, 1, 1};
        auto localResult = solution.minimumCoins(prices);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> prices = {26, 18, 6, 12, 49, 7, 45, 45};
        auto localResult = solution.minimumCoins(prices);
        int expected = 39;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
