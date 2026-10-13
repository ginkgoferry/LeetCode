/*
 * Problem: 518. 零钱兑换 II / Coin Change II
 * Link: https://leetcode.cn/problems/coin-change-ii/
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
    int change(int amount, vector<int>& coins) {
        // TODO: 在这里实现你的解法。
        (void)amount;
        (void)coins;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int amount = 5;
        vector<int> coins = {1, 2, 5};
        auto localResult = solution.change(amount, coins);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int amount = 3;
        vector<int> coins = {2};
        auto localResult = solution.change(amount, coins);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int amount = 10;
        vector<int> coins = {10};
        auto localResult = solution.change(amount, coins);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
