/*
 * Problem: 3464. 正方形上的点之间的最大距离 / Maximize the Distance Between Points on a Square
 * Link: https://leetcode.cn/problems/maximize-the-distance-between-points-on-a-square/
 * Chapter: 双指针
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
    int maxDistance(int side, vector<vector<int>>& points, int k) {
        // TODO: 在这里实现你的解法。
        (void)side;
        (void)points;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int side = 2;
        vector<vector<int>> points = {{0, 2}, {2, 0}, {2, 2}, {0, 0}};
        int k = 4;
        auto localResult = solution.maxDistance(side, points, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int side = 2;
        vector<vector<int>> points = {{0, 0}, {1, 2}, {2, 0}, {2, 2}, {2, 1}};
        int k = 4;
        auto localResult = solution.maxDistance(side, points, k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int side = 2;
        vector<vector<int>> points = {{0, 0}, {0, 1}, {0, 2}, {1, 2}, {2, 0}, {2, 2}, {2, 1}};
        int k = 5;
        auto localResult = solution.maxDistance(side, points, k);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
