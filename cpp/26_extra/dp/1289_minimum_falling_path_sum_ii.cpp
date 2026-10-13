/*
 * Problem: 1289. 下降路径最小和  II / Minimum Falling Path Sum II
 * Link: https://leetcode.cn/problems/minimum-falling-path-sum-ii/
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
    int minFallingPathSum(vector<vector<int>>& grid) {
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
        vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        auto localResult = solution.minFallingPathSum(grid);
        int expected = 13;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{7}};
        auto localResult = solution.minFallingPathSum(grid);
        int expected = 7;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
