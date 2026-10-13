/*
 * Problem: 322. 零钱兑换 / Coin Change
 * Link: https://leetcode.cn/problems/coin-change/
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
    int coinChange(vector<int>& coins, int amount) {
        // TODO: 在这里实现你的解法。
        (void)coins;
        (void)amount;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> coins = {1, 2, 5};
        int amount = 11;
        assert((solution.coinChange(coins, amount) == 3));
    }

    {
        vector<int> coins = {2};
        int amount = 3;
        assert((solution.coinChange(coins, amount) == -1));
    }

    {
        vector<int> coins = {1};
        int amount = 0;
        assert((solution.coinChange(coins, amount) == 0));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
