/*
 * Problem: 1034. 边界着色 / Coloring A Border
 * Link: https://leetcode.cn/problems/coloring-a-border/
 * Chapter: 网格图
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
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        (void)row;
        (void)col;
        (void)color;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 1}, {1, 2}};
        int row = 0;
        int col = 0;
        int color = 3;
        auto localResult = solution.colorBorder(grid, row, col, color);
        vector<vector<int>> expected = {{3, 3}, {3, 2}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 2, 2}, {2, 3, 2}};
        int row = 0;
        int col = 1;
        int color = 3;
        auto localResult = solution.colorBorder(grid, row, col, color);
        vector<vector<int>> expected = {{1, 3, 3}, {2, 3, 3}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
        int row = 1;
        int col = 1;
        int color = 2;
        auto localResult = solution.colorBorder(grid, row, col, color);
        vector<vector<int>> expected = {{2, 2, 2}, {2, 1, 2}, {2, 2, 2}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
