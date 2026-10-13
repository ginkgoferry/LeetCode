/*
 * Problem: 3122. 使矩阵满足条件的最少操作次数 / Minimum Number of Operations to Satisfy Conditions
 * Link: https://leetcode.cn/problems/minimum-number-of-operations-to-satisfy-conditions/
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
        vector<vector<int>> grid = {{1, 0, 2}, {1, 0, 2}};
        auto localResult = solution.minimumOperations(grid);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 1, 1}, {0, 0, 0}};
        auto localResult = solution.minimumOperations(grid);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{1}, {2}, {3}};
        auto localResult = solution.minimumOperations(grid);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
