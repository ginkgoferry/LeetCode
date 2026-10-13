/*
 * Problem: 803. 打砖块 / Bricks Falling When Hit
 * Link: https://leetcode.cn/problems/bricks-falling-when-hit/
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
    vector<int> hitBricks(vector<vector<int>>& grid, vector<vector<int>>& hits) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        (void)hits;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 0, 0, 0}, {1, 1, 1, 0}};
        vector<vector<int>> hits = {{1, 0}};
        auto localResult = solution.hitBricks(grid, hits);
        vector<int> expected = {2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 0, 0, 0}, {1, 1, 0, 0}};
        vector<vector<int>> hits = {{1, 1}, {1, 0}};
        auto localResult = solution.hitBricks(grid, hits);
        vector<int> expected = {0, 0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
