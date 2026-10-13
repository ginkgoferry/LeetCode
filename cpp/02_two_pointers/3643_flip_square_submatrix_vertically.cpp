/*
 * Problem: 3643. 垂直翻转子矩阵 / Flip Square Submatrix Vertically
 * Link: https://leetcode.cn/problems/flip-square-submatrix-vertically/
 * Chapter: 双指针
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
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        (void)x;
        (void)y;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
        int x = 1;
        int y = 0;
        int k = 3;
        auto localResult = solution.reverseSubmatrix(grid, x, y, k);
        vector<vector<int>> expected = {{1, 2, 3, 4}, {13, 14, 15, 8}, {9, 10, 11, 12}, {5, 6, 7, 16}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{3, 4, 2, 3}, {2, 3, 4, 2}};
        int x = 0;
        int y = 2;
        int k = 2;
        auto localResult = solution.reverseSubmatrix(grid, x, y, k);
        vector<vector<int>> expected = {{3, 4, 4, 2}, {2, 3, 2, 3}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
