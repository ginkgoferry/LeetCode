/*
 * Problem: 2732. 找到矩阵中的好子集 / Find a Good Subset of the Matrix
 * Link: https://leetcode.cn/problems/find-a-good-subset-of-the-matrix/
 * Chapter: 动态规划
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
    vector<int> goodSubsetofBinaryMatrix(vector<vector<int>>& grid) {
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
        vector<vector<int>> grid = {{0, 1, 1, 0}, {0, 0, 0, 1}, {1, 1, 1, 1}};
        const auto localOriginalGrid = grid;
        auto localResult = solution.goodSubsetofBinaryMatrix(grid);
        assert(!localResult.empty());
        set<int> rows;
        for (int row : localResult) {
            assert(row >= 0 && static_cast<size_t>(row) < localOriginalGrid.size());
            assert(rows.insert(row).second);
        }
        for (size_t col = 0; col < localOriginalGrid[0].size(); ++col) {
            size_t ones = 0; for (int row : localResult) ones += localOriginalGrid[row][col];
            assert(ones <= localResult.size() / 2);
        }
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{0}};
        const auto localOriginalGrid = grid;
        auto localResult = solution.goodSubsetofBinaryMatrix(grid);
        assert(!localResult.empty());
        set<int> rows;
        for (int row : localResult) {
            assert(row >= 0 && static_cast<size_t>(row) < localOriginalGrid.size());
            assert(rows.insert(row).second);
        }
        for (size_t col = 0; col < localOriginalGrid[0].size(); ++col) {
            size_t ones = 0; for (int row : localResult) ones += localOriginalGrid[row][col];
            assert(ones <= localResult.size() / 2);
        }
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 1, 1}, {1, 1, 1}};
        const auto localOriginalGrid = grid;
        auto localResult = solution.goodSubsetofBinaryMatrix(grid);
        assert(localResult.empty());
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
