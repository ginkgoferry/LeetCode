/*
 * Problem: 2304. 网格中的最小路径代价 / Minimum Path Cost in a Grid
 * Link: https://leetcode.cn/problems/minimum-path-cost-in-a-grid/
 * Chapter: 动态规划
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
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        (void)moveCost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> grid = {{5, 3}, {4, 0}, {2, 1}};
        vector<vector<int>> moveCost = {{9, 8}, {1, 5}, {10, 12}, {18, 6}, {2, 4}, {14, 3}};
        auto localResult = solution.minPathCost(grid, moveCost);
        int expected = 17;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{5, 1, 2}, {4, 0, 3}};
        vector<vector<int>> moveCost = {{12, 10, 15}, {20, 23, 8}, {21, 7, 1}, {8, 1, 13}, {9, 10, 25}, {5, 3, 2}};
        auto localResult = solution.minPathCost(grid, moveCost);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
