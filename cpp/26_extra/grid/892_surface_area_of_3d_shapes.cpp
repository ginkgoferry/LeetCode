/*
 * Problem: 892. 三维形体的表面积 / Surface Area of 3D Shapes
 * Link: https://leetcode.cn/problems/surface-area-of-3d-shapes/
 * Chapter: 网格图
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
    int surfaceArea(vector<vector<int>>& grid) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 2}, {3, 4}};
        auto localResult = solution.surfaceArea(grid);
        int expected = 34;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
        auto localResult = solution.surfaceArea(grid);
        int expected = 32;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{2, 2, 2}, {2, 1, 2}, {2, 2, 2}};
        auto localResult = solution.surfaceArea(grid);
        int expected = 46;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
