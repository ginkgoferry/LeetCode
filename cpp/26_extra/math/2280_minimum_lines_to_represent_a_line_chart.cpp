/*
 * Problem: 2280. 表示一个折线图的最少线段数 / Minimum Lines to Represent a Line Chart
 * Link: https://leetcode.cn/problems/minimum-lines-to-represent-a-line-chart/
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
    int minimumLines(vector<vector<int>>& stockPrices) {
        // TODO: 在这里实现你的解法。
        (void)stockPrices;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> stockPrices = {{1, 7}, {2, 6}, {3, 5}, {4, 4}, {5, 4}, {6, 3}, {7, 2}, {8, 1}};
        auto localResult = solution.minimumLines(stockPrices);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> stockPrices = {{3, 4}, {1, 2}, {7, 8}, {2, 3}};
        auto localResult = solution.minimumLines(stockPrices);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
