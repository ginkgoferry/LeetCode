/*
 * Problem: 939. 最小面积矩形 / Minimum Area Rectangle
 * Link: https://leetcode.cn/problems/minimum-area-rectangle/
 * Chapter: 数学
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
    int minAreaRect(vector<vector<int>>& points) {
        // TODO: 在这里实现你的解法。
        (void)points;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> points = {{1, 1}, {1, 3}, {3, 1}, {3, 3}, {2, 2}};
        auto localResult = solution.minAreaRect(points);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> points = {{1, 1}, {1, 3}, {3, 1}, {3, 3}, {4, 1}, {4, 3}};
        auto localResult = solution.minAreaRect(points);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
