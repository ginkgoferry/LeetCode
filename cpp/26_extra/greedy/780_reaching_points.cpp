/*
 * Problem: 780. 到达终点 / Reaching Points
 * Link: https://leetcode.cn/problems/reaching-points/
 * Chapter: 贪心算法
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
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        // TODO: 在这里实现你的解法。
        (void)sx;
        (void)sy;
        (void)tx;
        (void)ty;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int sx = 1;
        int sy = 1;
        int tx = 3;
        int ty = 5;
        auto localResult = solution.reachingPoints(sx, sy, tx, ty);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int sx = 1;
        int sy = 1;
        int tx = 2;
        int ty = 2;
        auto localResult = solution.reachingPoints(sx, sy, tx, ty);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int sx = 1;
        int sy = 1;
        int tx = 1;
        int ty = 1;
        auto localResult = solution.reachingPoints(sx, sy, tx, ty);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
