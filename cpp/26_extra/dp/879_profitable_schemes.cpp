/*
 * Problem: 879. 盈利计划 / Profitable Schemes
 * Link: https://leetcode.cn/problems/profitable-schemes/
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
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)minProfit;
        (void)group;
        (void)profit;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        int minProfit = 3;
        vector<int> group = {2, 2};
        vector<int> profit = {2, 3};
        auto localResult = solution.profitableSchemes(n, minProfit, group, profit);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 10;
        int minProfit = 5;
        vector<int> group = {2, 3, 5};
        vector<int> profit = {6, 7, 8};
        auto localResult = solution.profitableSchemes(n, minProfit, group, profit);
        int expected = 7;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
