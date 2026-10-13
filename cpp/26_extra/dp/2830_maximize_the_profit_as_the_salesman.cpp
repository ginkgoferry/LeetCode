/*
 * Problem: 2830. 销售利润最大化 / Maximize the Profit as the Salesman
 * Link: https://leetcode.cn/problems/maximize-the-profit-as-the-salesman/
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
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)offers;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> offers = {{0, 0, 1}, {0, 2, 2}, {1, 3, 2}};
        auto localResult = solution.maximizeTheProfit(n, offers);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> offers = {{0, 0, 1}, {0, 2, 10}, {1, 3, 2}};
        auto localResult = solution.maximizeTheProfit(n, offers);
        int expected = 10;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
