/*
 * Problem: 3446. 按对角线进行矩阵排序 / Sort Matrix by Diagonals
 * Link: https://leetcode.cn/problems/sort-matrix-by-diagonals/
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
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
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
        vector<vector<int>> grid = {{1, 7, 3}, {9, 8, 2}, {4, 5, 6}};
        auto localResult = solution.sortMatrix(grid);
        vector<vector<int>> expected = {{8, 2, 3}, {9, 6, 7}, {4, 5, 1}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{0, 1}, {1, 2}};
        auto localResult = solution.sortMatrix(grid);
        vector<vector<int>> expected = {{2, 1}, {1, 0}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{1}};
        auto localResult = solution.sortMatrix(grid);
        vector<vector<int>> expected = {{1}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
