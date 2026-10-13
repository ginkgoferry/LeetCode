/*
 * Problem: 2240. 买钢笔和铅笔的方案数 / Number of Ways to Buy Pens and Pencils
 * Link: https://leetcode.cn/problems/number-of-ways-to-buy-pens-and-pencils/
 * Chapter: 数学
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
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        // TODO: 在这里实现你的解法。
        (void)total;
        (void)cost1;
        (void)cost2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int total = 20;
        int cost1 = 10;
        int cost2 = 5;
        auto localResult = solution.waysToBuyPensPencils(total, cost1, cost2);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int total = 5;
        int cost1 = 10;
        int cost2 = 10;
        auto localResult = solution.waysToBuyPensPencils(total, cost1, cost2);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
