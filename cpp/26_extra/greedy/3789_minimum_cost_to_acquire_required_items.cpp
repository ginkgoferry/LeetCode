/*
 * Problem: 3789. 采购的最小花费 / Minimum Cost to Acquire Required Items
 * Link: https://leetcode.cn/problems/minimum-cost-to-acquire-required-items/
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
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        // TODO: 在这里实现你的解法。
        (void)cost1;
        (void)cost2;
        (void)costBoth;
        (void)need1;
        (void)need2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int cost1 = 3;
        int cost2 = 2;
        int costBoth = 1;
        int need1 = 3;
        int need2 = 2;
        auto localResult = solution.minimumCost(cost1, cost2, costBoth, need1, need2);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int cost1 = 5;
        int cost2 = 4;
        int costBoth = 15;
        int need1 = 2;
        int need2 = 3;
        auto localResult = solution.minimumCost(cost1, cost2, costBoth, need1, need2);
        long long expected = 22LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int cost1 = 5;
        int cost2 = 4;
        int costBoth = 15;
        int need1 = 0;
        int need2 = 0;
        auto localResult = solution.minimumCost(cost1, cost2, costBoth, need1, need2);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
