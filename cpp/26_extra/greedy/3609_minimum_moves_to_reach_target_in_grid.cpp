/*
 * Problem: 3609. 到达目标点的最小移动次数 / Minimum Moves to Reach Target in Grid
 * Link: https://leetcode.cn/problems/minimum-moves-to-reach-target-in-grid/
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
    int minMoves(int sx, int sy, int tx, int ty) {
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
        int sy = 2;
        int tx = 5;
        int ty = 4;
        auto localResult = solution.minMoves(sx, sy, tx, ty);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int sx = 0;
        int sy = 1;
        int tx = 2;
        int ty = 3;
        auto localResult = solution.minMoves(sx, sy, tx, ty);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int sx = 1;
        int sy = 1;
        int tx = 2;
        int ty = 2;
        auto localResult = solution.minMoves(sx, sy, tx, ty);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
