/*
 * Problem: LCP 38. 守卫城堡 / 守卫城堡
 * Link: https://leetcode.cn/problems/7rLGCR/
 * Chapter: 图论
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
    int guardCastle(vector<string>& grid) {
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
        vector<string> grid = {"S.C.P#P.", ".....#.S"};
        auto localResult = solution.guardCastle(grid);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> grid = {"SP#P..P#PC#.S", "..#P..P####.#"};
        auto localResult = solution.guardCastle(grid);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> grid = {"SP#.C.#PS", "P.#...#.P"};
        auto localResult = solution.guardCastle(grid);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> grid = {"CP.#.P.", "...S..S"};
        auto localResult = solution.guardCastle(grid);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
