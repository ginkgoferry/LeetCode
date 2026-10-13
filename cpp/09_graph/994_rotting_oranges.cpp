/*
 * Problem: 994. 腐烂的橘子 / Rotting Oranges
 * Link: https://leetcode.cn/problems/rotting-oranges/
 * Chapter: 图论
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
    int orangesRotting(vector<vector<int>>& grid) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<vector<int>> grid = {{2, 1, 1}, {1, 1, 0}, {0, 1, 1}};
        assert((solution.orangesRotting(grid) == 4));
    }

    {
        vector<vector<int>> grid = {{2, 1, 1}, {0, 1, 1}, {1, 0, 1}};
        assert((solution.orangesRotting(grid) == -1));
    }

    {
        vector<vector<int>> grid = {{0, 2}};
        assert((solution.orangesRotting(grid) == 0));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
