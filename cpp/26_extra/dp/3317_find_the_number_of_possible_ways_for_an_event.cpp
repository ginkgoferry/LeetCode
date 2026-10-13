/*
 * Problem: 3317. 安排活动的方案数 / Find the Number of Possible Ways for an Event
 * Link: https://leetcode.cn/problems/find-the-number-of-possible-ways-for-an-event/
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
    int numberOfWays(int n, int x, int y) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)x;
        (void)y;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 1;
        int x = 2;
        int y = 3;
        auto localResult = solution.numberOfWays(n, x, y);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int x = 2;
        int y = 1;
        auto localResult = solution.numberOfWays(n, x, y);
        int expected = 32;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        int x = 3;
        int y = 4;
        auto localResult = solution.numberOfWays(n, x, y);
        int expected = 684;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
