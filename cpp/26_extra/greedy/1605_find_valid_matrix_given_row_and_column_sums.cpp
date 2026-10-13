/*
 * Problem: 1605. 给定行和列的和求可行矩阵 / Find Valid Matrix Given Row and Column Sums
 * Link: https://leetcode.cn/problems/find-valid-matrix-given-row-and-column-sums/
 * Chapter: 贪心算法
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
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        // TODO: 在这里实现你的解法。
        (void)rowSum;
        (void)colSum;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> rowSum = {3, 8};
        vector<int> colSum = {4, 7};
        const auto localOriginalRows = rowSum;
        const auto localOriginalCols = colSum;
        auto localResult = solution.restoreMatrix(rowSum, colSum);
        assert(localResult.size() == localOriginalRows.size());
        vector<long long> columns(localOriginalCols.size());
        for (size_t i = 0; i < localResult.size(); ++i) {
            assert(localResult[i].size() == localOriginalCols.size());
            assert(accumulate(localResult[i].begin(), localResult[i].end(), 0LL) == localOriginalRows[i]);
            for (size_t j = 0; j < columns.size(); ++j) { assert(localResult[i][j] >= 0); columns[j] += localResult[i][j]; }
        }
        for (size_t j = 0; j < columns.size(); ++j) assert(columns[j] == localOriginalCols[j]);
    }

    {
        // 官方样例
        vector<int> rowSum = {5, 7, 10};
        vector<int> colSum = {8, 6, 8};
        const auto localOriginalRows = rowSum;
        const auto localOriginalCols = colSum;
        auto localResult = solution.restoreMatrix(rowSum, colSum);
        assert(localResult.size() == localOriginalRows.size());
        vector<long long> columns(localOriginalCols.size());
        for (size_t i = 0; i < localResult.size(); ++i) {
            assert(localResult[i].size() == localOriginalCols.size());
            assert(accumulate(localResult[i].begin(), localResult[i].end(), 0LL) == localOriginalRows[i]);
            for (size_t j = 0; j < columns.size(); ++j) { assert(localResult[i][j] >= 0); columns[j] += localResult[i][j]; }
        }
        for (size_t j = 0; j < columns.size(); ++j) assert(columns[j] == localOriginalCols[j]);
    }

    {
        // 官方样例
        vector<int> rowSum = {14, 9};
        vector<int> colSum = {6, 9, 8};
        const auto localOriginalRows = rowSum;
        const auto localOriginalCols = colSum;
        auto localResult = solution.restoreMatrix(rowSum, colSum);
        assert(localResult.size() == localOriginalRows.size());
        vector<long long> columns(localOriginalCols.size());
        for (size_t i = 0; i < localResult.size(); ++i) {
            assert(localResult[i].size() == localOriginalCols.size());
            assert(accumulate(localResult[i].begin(), localResult[i].end(), 0LL) == localOriginalRows[i]);
            for (size_t j = 0; j < columns.size(); ++j) { assert(localResult[i][j] >= 0); columns[j] += localResult[i][j]; }
        }
        for (size_t j = 0; j < columns.size(); ++j) assert(columns[j] == localOriginalCols[j]);
    }

    {
        // 官方样例
        vector<int> rowSum = {1, 0};
        vector<int> colSum = {1};
        const auto localOriginalRows = rowSum;
        const auto localOriginalCols = colSum;
        auto localResult = solution.restoreMatrix(rowSum, colSum);
        assert(localResult.size() == localOriginalRows.size());
        vector<long long> columns(localOriginalCols.size());
        for (size_t i = 0; i < localResult.size(); ++i) {
            assert(localResult[i].size() == localOriginalCols.size());
            assert(accumulate(localResult[i].begin(), localResult[i].end(), 0LL) == localOriginalRows[i]);
            for (size_t j = 0; j < columns.size(); ++j) { assert(localResult[i][j] >= 0); columns[j] += localResult[i][j]; }
        }
        for (size_t j = 0; j < columns.size(); ++j) assert(columns[j] == localOriginalCols[j]);
    }

    {
        // 官方样例
        vector<int> rowSum = {0};
        vector<int> colSum = {0};
        const auto localOriginalRows = rowSum;
        const auto localOriginalCols = colSum;
        auto localResult = solution.restoreMatrix(rowSum, colSum);
        assert(localResult.size() == localOriginalRows.size());
        vector<long long> columns(localOriginalCols.size());
        for (size_t i = 0; i < localResult.size(); ++i) {
            assert(localResult[i].size() == localOriginalCols.size());
            assert(accumulate(localResult[i].begin(), localResult[i].end(), 0LL) == localOriginalRows[i]);
            for (size_t j = 0; j < columns.size(); ++j) { assert(localResult[i][j] >= 0); columns[j] += localResult[i][j]; }
        }
        for (size_t j = 0; j < columns.size(); ++j) assert(columns[j] == localOriginalCols[j]);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
