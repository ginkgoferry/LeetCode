/*
 * Problem: 223. 矩形面积 / Rectangle Area
 * Link: https://leetcode.cn/problems/rectangle-area/
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
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        // TODO: 在这里实现你的解法。
        (void)ax1;
        (void)ay1;
        (void)ax2;
        (void)ay2;
        (void)bx1;
        (void)by1;
        (void)bx2;
        (void)by2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int ax1 = -3;
        int ay1 = 0;
        int ax2 = 3;
        int ay2 = 4;
        int bx1 = 0;
        int by1 = -1;
        int bx2 = 9;
        int by2 = 2;
        auto localResult = solution.computeArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2);
        int expected = 45;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int ax1 = -2;
        int ay1 = -2;
        int ax2 = 2;
        int ay2 = 2;
        int bx1 = -2;
        int by1 = -2;
        int bx2 = 2;
        int by2 = 2;
        auto localResult = solution.computeArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2);
        int expected = 16;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
