/*
 * Problem: 3651. 带传送的最小路径成本 / Minimum Cost Path with Teleportations
 * Link: https://leetcode.cn/problems/minimum-cost-path-with-teleportations/
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
    int minCost(vector<vector<int>>& grid, int k) {
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
        vector<vector<int>> grid = {{1, 3, 3}, {2, 5, 4}, {4, 3, 5}};
        int k = 2;
        auto localResult = solution.minCost(grid, k);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 2}, {2, 3}, {3, 4}};
        int k = 1;
        auto localResult = solution.minCost(grid, k);
        int expected = 9;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
