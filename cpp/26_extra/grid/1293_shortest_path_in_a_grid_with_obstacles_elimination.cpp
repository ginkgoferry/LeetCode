/*
 * Problem: 1293. 网格中的最短路径 / Shortest Path in a Grid with Obstacles Elimination
 * Link: https://leetcode.cn/problems/shortest-path-in-a-grid-with-obstacles-elimination/
 * Chapter: 网格图
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
    int shortestPath(vector<vector<int>>& grid, int k) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> grid = {{0, 0, 0}, {1, 1, 0}, {0, 0, 0}, {0, 1, 1}, {0, 0, 0}};
        int k = 1;
        auto localResult = solution.shortestPath(grid, k);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{0, 1, 1}, {1, 1, 1}, {1, 0, 0}};
        int k = 1;
        auto localResult = solution.shortestPath(grid, k);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
