/*
 * Problem: 3413. 收集连续 K 个袋子可以获得的最多硬币数量 / Maximum Coins From K Consecutive Bags
 * Link: https://leetcode.cn/problems/maximum-coins-from-k-consecutive-bags/
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
    long long maximumCoins(vector<vector<int>>& coins, int k) {
        // TODO: 在这里实现你的解法。
        (void)coins;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> coins = {{8, 10, 1}, {1, 3, 2}, {5, 6, 4}};
        int k = 4;
        auto localResult = solution.maximumCoins(coins, k);
        long long expected = 10LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> coins = {{1, 10, 3}};
        int k = 2;
        auto localResult = solution.maximumCoins(coins, k);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
