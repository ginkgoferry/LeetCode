/*
 * Problem: 1351. 统计有序矩阵中的负数 / Count Negative Numbers in a Sorted Matrix
 * Link: https://leetcode.cn/problems/count-negative-numbers-in-a-sorted-matrix/
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
    int countNegatives(vector<vector<int>>& grid) {
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
        vector<vector<int>> grid = {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
        auto localResult = solution.countNegatives(grid);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{3, 2}, {1, 0}};
        auto localResult = solution.countNegatives(grid);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<vector<int>> grid = {{0}};
        auto localResult = solution.countNegatives(grid);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
