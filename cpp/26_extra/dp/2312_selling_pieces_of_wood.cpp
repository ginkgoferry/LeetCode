/*
 * Problem: 2312. 卖木头块 / Selling Pieces of Wood
 * Link: https://leetcode.cn/problems/selling-pieces-of-wood/
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
    long long sellingWood(int m, int n, vector<vector<int>>& prices) {
        // TODO: 在这里实现你的解法。
        (void)m;
        (void)n;
        (void)prices;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int m = 3;
        int n = 5;
        vector<vector<int>> prices = {{1, 4, 2}, {2, 2, 7}, {2, 1, 3}};
        auto localResult = solution.sellingWood(m, n, prices);
        long long expected = 19LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int m = 4;
        int n = 6;
        vector<vector<int>> prices = {{3, 2, 10}, {1, 4, 2}, {4, 1, 3}};
        auto localResult = solution.sellingWood(m, n, prices);
        long long expected = 32LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
