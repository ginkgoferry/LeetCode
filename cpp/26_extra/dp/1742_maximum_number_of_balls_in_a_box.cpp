/*
 * Problem: 1742. 盒子中小球的最大数量 / Maximum Number of Balls in a Box
 * Link: https://leetcode.cn/problems/maximum-number-of-balls-in-a-box/
 * Chapter: 动态规划
 * Difficulty: Easy
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
    int countBalls(int lowLimit, int highLimit) {
        // TODO: 在这里实现你的解法。
        (void)lowLimit;
        (void)highLimit;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int lowLimit = 1;
        int highLimit = 10;
        auto localResult = solution.countBalls(lowLimit, highLimit);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int lowLimit = 5;
        int highLimit = 15;
        auto localResult = solution.countBalls(lowLimit, highLimit);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int lowLimit = 19;
        int highLimit = 28;
        auto localResult = solution.countBalls(lowLimit, highLimit);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
