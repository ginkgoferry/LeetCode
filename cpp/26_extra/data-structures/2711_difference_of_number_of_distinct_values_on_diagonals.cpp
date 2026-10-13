/*
 * Problem: 2711. 对角线上不同值的数量差 / Difference of Number of Distinct Values on Diagonals
 * Link: https://leetcode.cn/problems/difference-of-number-of-distinct-values-on-diagonals/
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
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
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
        vector<vector<int>> grid = {{1, 2, 3}, {3, 1, 5}, {3, 2, 1}};
        auto localResult = solution.differenceOfDistinctValues(grid);
        vector<vector<int>> expected = {{1, 1, 0}, {1, 0, 1}, {0, 1, 1}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{1}};
        auto localResult = solution.differenceOfDistinctValues(grid);
        vector<vector<int>> expected = {{0}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
