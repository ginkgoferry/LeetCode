/*
 * Problem: 1039. 多边形三角剖分的最低得分 / Minimum Score Triangulation of Polygon
 * Link: https://leetcode.cn/problems/minimum-score-triangulation-of-polygon/
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
    int minScoreTriangulation(vector<int>& values) {
        // TODO: 在这里实现你的解法。
        (void)values;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> values = {1, 2, 3};
        auto localResult = solution.minScoreTriangulation(values);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> values = {3, 7, 4, 5};
        auto localResult = solution.minScoreTriangulation(values);
        int expected = 144;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> values = {1, 3, 1, 4, 1, 5};
        auto localResult = solution.minScoreTriangulation(values);
        int expected = 13;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
