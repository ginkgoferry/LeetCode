/*
 * Problem: 1253. 重构 2 行二进制矩阵 / Reconstruct a 2-Row Binary Matrix
 * Link: https://leetcode.cn/problems/reconstruct-a-2-row-binary-matrix/
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
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        // TODO: 在这里实现你的解法。
        (void)upper;
        (void)lower;
        (void)colsum;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int upper = 2;
        int lower = 1;
        vector<int> colsum = {1, 1, 1};
        auto localResult = solution.reconstructMatrix(upper, lower, colsum);
        assert(localResult.size() == 2);
        for (const auto& row : localResult) { assert(row.size() == colsum.size()); for (int value : row) assert(value == 0 || value == 1); }
        assert(accumulate(localResult[0].begin(), localResult[0].end(), 0) == upper);
        assert(accumulate(localResult[1].begin(), localResult[1].end(), 0) == lower);
        for (size_t j = 0; j < colsum.size(); ++j) assert(localResult[0][j] + localResult[1][j] == colsum[j]);
    }

    {
        // 官方样例
        int upper = 2;
        int lower = 3;
        vector<int> colsum = {2, 2, 1, 1};
        auto localResult = solution.reconstructMatrix(upper, lower, colsum);
        assert(localResult.empty());
    }

    {
        // 官方样例
        int upper = 5;
        int lower = 5;
        vector<int> colsum = {2, 1, 2, 0, 1, 0, 1, 2, 0, 1};
        auto localResult = solution.reconstructMatrix(upper, lower, colsum);
        assert(localResult.size() == 2);
        for (const auto& row : localResult) { assert(row.size() == colsum.size()); for (int value : row) assert(value == 0 || value == 1); }
        assert(accumulate(localResult[0].begin(), localResult[0].end(), 0) == upper);
        assert(accumulate(localResult[1].begin(), localResult[1].end(), 0) == lower);
        for (size_t j = 0; j < colsum.size(); ++j) assert(localResult[0][j] + localResult[1][j] == colsum[j]);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
