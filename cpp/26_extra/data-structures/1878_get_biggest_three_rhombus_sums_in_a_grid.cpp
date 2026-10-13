/*
 * Problem: 1878. 矩阵中最大的三个菱形和 / Get Biggest Three Rhombus Sums in a Grid
 * Link: https://leetcode.cn/problems/get-biggest-three-rhombus-sums-in-a-grid/
 * Chapter: 数据结构
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
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
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
        vector<vector<int>> grid = {{3, 4, 5, 1, 3}, {3, 3, 4, 2, 3}, {20, 30, 200, 40, 10}, {1, 5, 5, 4, 1}, {4, 3, 2, 2, 5}};
        auto localResult = solution.getBiggestThree(grid);
        vector<int> expected = {228, 216, 211};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        auto localResult = solution.getBiggestThree(grid);
        vector<int> expected = {20, 9, 8};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{7, 7, 7}};
        auto localResult = solution.getBiggestThree(grid);
        vector<int> expected = {7};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
