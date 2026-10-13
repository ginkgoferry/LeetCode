/*
 * Problem: 3402. 使每一列严格递增的最少操作次数 / Minimum Operations to Make Columns Strictly Increasing
 * Link: https://leetcode.cn/problems/minimum-operations-to-make-columns-strictly-increasing/
 * Chapter: 贪心算法
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
    int minimumOperations(vector<vector<int>>& grid) {
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
        vector<vector<int>> grid = {{3, 2}, {1, 3}, {3, 4}, {0, 1}};
        auto localResult = solution.minimumOperations(grid);
        int expected = 15;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{3, 2, 1}, {2, 1, 0}, {1, 2, 3}};
        auto localResult = solution.minimumOperations(grid);
        int expected = 12;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
