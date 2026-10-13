/*
 * Problem: 1463. 摘樱桃 II / Cherry Pickup II
 * Link: https://leetcode.cn/problems/cherry-pickup-ii/
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
    int cherryPickup(vector<vector<int>>& grid) {
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
        vector<vector<int>> grid = {{3, 1, 1}, {2, 5, 1}, {1, 5, 5}, {2, 1, 1}};
        auto localResult = solution.cherryPickup(grid);
        int expected = 24;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 0, 0, 0, 0, 0, 1}, {2, 0, 0, 0, 0, 3, 0}, {2, 0, 9, 0, 0, 0, 0}, {0, 3, 0, 5, 4, 0, 0}, {1, 0, 2, 3, 0, 0, 6}};
        auto localResult = solution.cherryPickup(grid);
        int expected = 28;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 0, 0, 3}, {0, 0, 0, 3}, {0, 0, 3, 3}, {9, 0, 3, 3}};
        auto localResult = solution.cherryPickup(grid);
        int expected = 22;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 1}, {1, 1}};
        auto localResult = solution.cherryPickup(grid);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
