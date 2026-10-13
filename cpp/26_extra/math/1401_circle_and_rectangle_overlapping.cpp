/*
 * Problem: 1401. 圆和矩形是否有重叠 / Circle and Rectangle Overlapping
 * Link: https://leetcode.cn/problems/circle-and-rectangle-overlapping/
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
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        // TODO: 在这里实现你的解法。
        (void)radius;
        (void)xCenter;
        (void)yCenter;
        (void)x1;
        (void)y1;
        (void)x2;
        (void)y2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int radius = 1;
        int xCenter = 0;
        int yCenter = 0;
        int x1 = 1;
        int y1 = -1;
        int x2 = 3;
        int y2 = 1;
        auto localResult = solution.checkOverlap(radius, xCenter, yCenter, x1, y1, x2, y2);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int radius = 1;
        int xCenter = 1;
        int yCenter = 1;
        int x1 = 1;
        int y1 = -3;
        int x2 = 2;
        int y2 = -1;
        auto localResult = solution.checkOverlap(radius, xCenter, yCenter, x1, y1, x2, y2);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int radius = 1;
        int xCenter = 0;
        int yCenter = 0;
        int x1 = -1;
        int y1 = 0;
        int x2 = 0;
        int y2 = 1;
        auto localResult = solution.checkOverlap(radius, xCenter, yCenter, x1, y1, x2, y2);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
