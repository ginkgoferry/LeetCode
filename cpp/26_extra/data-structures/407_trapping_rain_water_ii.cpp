/*
 * Problem: 407. 接雨水 II / Trapping Rain Water II
 * Link: https://leetcode.cn/problems/trapping-rain-water-ii/
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
    int trapRainWater(vector<vector<int>>& heightMap) {
        // TODO: 在这里实现你的解法。
        (void)heightMap;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> heightMap = {{1, 4, 3, 1, 3, 2}, {3, 2, 1, 3, 2, 4}, {2, 3, 3, 2, 3, 1}};
        auto localResult = solution.trapRainWater(heightMap);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> heightMap = {{3, 3, 3, 3, 3}, {3, 2, 2, 2, 3}, {3, 2, 1, 2, 3}, {3, 2, 2, 2, 3}, {3, 3, 3, 3, 3}};
        auto localResult = solution.trapRainWater(heightMap);
        int expected = 10;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
