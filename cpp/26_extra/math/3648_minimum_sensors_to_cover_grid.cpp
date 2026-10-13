/*
 * Problem: 3648. 覆盖网格的最少传感器数目 / Minimum Sensors to Cover Grid
 * Link: https://leetcode.cn/problems/minimum-sensors-to-cover-grid/
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
    int minSensors(int n, int m, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)m;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        int m = 5;
        int k = 1;
        auto localResult = solution.minSensors(n, m, k);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        int m = 2;
        int k = 2;
        auto localResult = solution.minSensors(n, m, k);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
