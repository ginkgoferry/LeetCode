/*
 * Problem: 1901. 寻找峰值 II / Find a Peak Element II
 * Link: https://leetcode.cn/problems/find-a-peak-element-ii/
 * Chapter: 二分查找
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
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // TODO: 在这里实现你的解法。
        (void)mat;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> mat = {{1, 4}, {3, 2}};
        const auto original = mat;
        auto localResult = solution.findPeakGrid(mat);
        assert(localResult.size() == 2);
        int row = localResult[0], col = localResult[1];
        assert(row >= 0 && col >= 0 && static_cast<size_t>(row) < original.size() && static_cast<size_t>(col) < original[0].size());
        const int dr[] = {-1, 1, 0, 0}, dc[] = {0, 0, -1, 1};
        for (int d = 0; d < 4; ++d) {
            int nr = row + dr[d], nc = col + dc[d];
            if (nr >= 0 && nc >= 0 && static_cast<size_t>(nr) < original.size() && static_cast<size_t>(nc) < original[0].size())
                assert(original[row][col] > original[nr][nc]);
        }
    }

    {
        // 官方样例
        vector<vector<int>> mat = {{10, 20, 15}, {21, 30, 14}, {7, 16, 32}};
        const auto original = mat;
        auto localResult = solution.findPeakGrid(mat);
        assert(localResult.size() == 2);
        int row = localResult[0], col = localResult[1];
        assert(row >= 0 && col >= 0 && static_cast<size_t>(row) < original.size() && static_cast<size_t>(col) < original[0].size());
        const int dr[] = {-1, 1, 0, 0}, dc[] = {0, 0, -1, 1};
        for (int d = 0; d < 4; ++d) {
            int nr = row + dr[d], nc = col + dc[d];
            if (nr >= 0 && nc >= 0 && static_cast<size_t>(nr) < original.size() && static_cast<size_t>(nc) < original[0].size())
                assert(original[row][col] > original[nr][nc]);
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
