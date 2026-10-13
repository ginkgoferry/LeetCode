/*
 * Problem: 837. 新 21 点 / New 21 Game
 * Link: https://leetcode.cn/problems/new-21-game/
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
    double new21Game(int n, int k, int maxPts) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)k;
        (void)maxPts;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 10;
        int k = 1;
        int maxPts = 10;
        auto localResult = solution.new21Game(n, k, maxPts);
        double expected = 1.0;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        int n = 6;
        int k = 1;
        int maxPts = 10;
        auto localResult = solution.new21Game(n, k, maxPts);
        double expected = 0.6;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        int n = 21;
        int k = 17;
        int maxPts = 10;
        auto localResult = solution.new21Game(n, k, maxPts);
        double expected = 0.73278;
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
