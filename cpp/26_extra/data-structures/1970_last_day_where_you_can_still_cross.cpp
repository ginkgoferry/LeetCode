/*
 * Problem: 1970. 你能穿过矩阵的最后一天 / Last Day Where You Can Still Cross
 * Link: https://leetcode.cn/problems/last-day-where-you-can-still-cross/
 * Chapter: 网格图
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
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        // TODO: 在这里实现你的解法。
        (void)row;
        (void)col;
        (void)cells;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int row = 2;
        int col = 2;
        vector<vector<int>> cells = {{1, 1}, {2, 1}, {1, 2}, {2, 2}};
        auto localResult = solution.latestDayToCross(row, col, cells);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int row = 2;
        int col = 2;
        vector<vector<int>> cells = {{1, 1}, {1, 2}, {2, 1}, {2, 2}};
        auto localResult = solution.latestDayToCross(row, col, cells);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int row = 3;
        int col = 3;
        vector<vector<int>> cells = {{1, 2}, {2, 1}, {3, 3}, {2, 2}, {1, 1}, {1, 3}, {2, 3}, {3, 2}, {3, 1}};
        auto localResult = solution.latestDayToCross(row, col, cells);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
