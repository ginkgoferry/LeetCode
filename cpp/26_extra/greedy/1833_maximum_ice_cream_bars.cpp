/*
 * Problem: 1833. 雪糕的最大数量 / Maximum Ice Cream Bars
 * Link: https://leetcode.cn/problems/maximum-ice-cream-bars/
 * Chapter: 贪心算法
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
    int maxIceCream(vector<int>& costs, int coins) {
        // TODO: 在这里实现你的解法。
        (void)costs;
        (void)coins;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> costs = {1, 3, 2, 4, 1};
        int coins = 7;
        auto localResult = solution.maxIceCream(costs, coins);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> costs = {10, 6, 8, 7, 7, 8};
        int coins = 5;
        auto localResult = solution.maxIceCream(costs, coins);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> costs = {1, 6, 3, 1, 2, 5};
        int coins = 20;
        auto localResult = solution.maxIceCream(costs, coins);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
