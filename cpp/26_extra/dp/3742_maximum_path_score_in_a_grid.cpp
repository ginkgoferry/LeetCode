/*
 * Problem: 3742. 网格中得分最大的路径 / Maximum Path Score in a Grid
 * Link: https://leetcode.cn/problems/maximum-path-score-in-a-grid/
 * Chapter: 动态规划
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
    int maxPathScore(vector<vector<int>>& grid, int k) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> grid = {{0, 1}, {2, 0}};
        int k = 1;
        auto localResult = solution.maxPathScore(grid, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{0, 1}, {1, 2}};
        int k = 1;
        auto localResult = solution.maxPathScore(grid, k);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
