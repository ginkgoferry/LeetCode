/*
 * Problem: 812. 最大三角形面积 / Largest Triangle Area
 * Link: https://leetcode.cn/problems/largest-triangle-area/
 * Chapter: 数学
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
    double largestTriangleArea(vector<vector<int>>& points) {
        // TODO: 在这里实现你的解法。
        (void)points;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> points = {{0, 0}, {0, 1}, {1, 0}, {0, 2}, {2, 0}};
        auto localResult = solution.largestTriangleArea(points);
        double expected = 2.0;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        vector<vector<int>> points = {{1, 0}, {0, 0}, {0, 1}};
        auto localResult = solution.largestTriangleArea(points);
        double expected = 0.5;
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
