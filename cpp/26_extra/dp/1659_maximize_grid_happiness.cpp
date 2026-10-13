/*
 * Problem: 1659. 最大化网格幸福感 / Maximize Grid Happiness
 * Link: https://leetcode.cn/problems/maximize-grid-happiness/
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
    int getMaxGridHappiness(int m, int n, int introvertsCount, int extrovertsCount) {
        // TODO: 在这里实现你的解法。
        (void)m;
        (void)n;
        (void)introvertsCount;
        (void)extrovertsCount;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int m = 2;
        int n = 3;
        int introvertsCount = 1;
        int extrovertsCount = 2;
        auto localResult = solution.getMaxGridHappiness(m, n, introvertsCount, extrovertsCount);
        int expected = 240;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int m = 3;
        int n = 1;
        int introvertsCount = 2;
        int extrovertsCount = 1;
        auto localResult = solution.getMaxGridHappiness(m, n, introvertsCount, extrovertsCount);
        int expected = 260;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int m = 2;
        int n = 2;
        int introvertsCount = 4;
        int extrovertsCount = 0;
        auto localResult = solution.getMaxGridHappiness(m, n, introvertsCount, extrovertsCount);
        int expected = 240;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
