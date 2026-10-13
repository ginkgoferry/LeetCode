/*
 * Problem: 2503. 矩阵查询可获得的最大分数 / Maximum Number of Points From Grid Queries
 * Link: https://leetcode.cn/problems/maximum-number-of-points-from-grid-queries/
 * Chapter: 数据结构
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
    vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& queries) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 2, 3}, {2, 5, 7}, {3, 5, 1}};
        vector<int> queries = {5, 6, 2};
        auto localResult = solution.maxPoints(grid, queries);
        vector<int> expected = {5, 8, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{5, 2, 1}, {1, 1, 2}};
        vector<int> queries = {3};
        auto localResult = solution.maxPoints(grid, queries);
        vector<int> expected = {0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
