/*
 * Problem: 2271. 毯子覆盖的最多白色砖块数 / Maximum White Tiles Covered by a Carpet
 * Link: https://leetcode.cn/problems/maximum-white-tiles-covered-by-a-carpet/
 * Chapter: 滑动窗口
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
    int maximumWhiteTiles(vector<vector<int>>& tiles, int carpetLen) {
        // TODO: 在这里实现你的解法。
        (void)tiles;
        (void)carpetLen;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> tiles = {{1, 5}, {10, 11}, {12, 18}, {20, 25}, {30, 32}};
        int carpetLen = 10;
        auto localResult = solution.maximumWhiteTiles(tiles, carpetLen);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> tiles = {{10, 11}, {1, 1}};
        int carpetLen = 2;
        auto localResult = solution.maximumWhiteTiles(tiles, carpetLen);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
