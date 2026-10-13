/*
 * Problem: 2110. 股票平滑下跌阶段的数目 / Number of Smooth Descent Periods of a Stock
 * Link: https://leetcode.cn/problems/number-of-smooth-descent-periods-of-a-stock/
 * Chapter: 分组循环
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
    long long getDescentPeriods(vector<int>& prices) {
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
        vector<int> prices = {3, 2, 1, 4};
        auto localResult = solution.getDescentPeriods(prices);
        long long expected = 7LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> prices = {8, 6, 7, 7};
        auto localResult = solution.getDescentPeriods(prices);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> prices = {1};
        auto localResult = solution.getDescentPeriods(prices);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> prices = {1};
        auto localResult = solution.getDescentPeriods(prices);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
