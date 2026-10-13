/*
 * Problem: 1079. 活字印刷 / Letter Tile Possibilities
 * Link: https://leetcode.cn/problems/letter-tile-possibilities/
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
    int numTilePossibilities(string tiles) {
        // TODO: 在这里实现你的解法。
        (void)tiles;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string tiles = "AAB";
        auto localResult = solution.numTilePossibilities(tiles);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string tiles = "AAABBC";
        auto localResult = solution.numTilePossibilities(tiles);
        int expected = 188;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string tiles = "V";
        auto localResult = solution.numTilePossibilities(tiles);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
