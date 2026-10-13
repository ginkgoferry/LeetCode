/*
 * Problem: 1411. 给 N x 3 网格图涂色的方案数 / Number of Ways to Paint N × 3 Grid
 * Link: https://leetcode.cn/problems/number-of-ways-to-paint-n-3-grid/
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
    int numOfWays(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 1;
        auto localResult = solution.numOfWays(n);
        int expected = 12;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        auto localResult = solution.numOfWays(n);
        int expected = 54;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        auto localResult = solution.numOfWays(n);
        int expected = 246;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 7;
        auto localResult = solution.numOfWays(n);
        int expected = 106494;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5000;
        auto localResult = solution.numOfWays(n);
        int expected = 30228214;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
