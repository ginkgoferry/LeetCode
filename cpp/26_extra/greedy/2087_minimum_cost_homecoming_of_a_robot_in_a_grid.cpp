/*
 * Problem: 2087. 网格图中机器人回家的最小代价 / Minimum Cost Homecoming of a Robot in a Grid
 * Link: https://leetcode.cn/problems/minimum-cost-homecoming-of-a-robot-in-a-grid/
 * Chapter: 贪心算法
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
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        // TODO: 在这里实现你的解法。
        (void)startPos;
        (void)homePos;
        (void)rowCosts;
        (void)colCosts;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> startPos = {1, 0};
        vector<int> homePos = {2, 3};
        vector<int> rowCosts = {5, 4, 3};
        vector<int> colCosts = {8, 2, 6, 7};
        auto localResult = solution.minCost(startPos, homePos, rowCosts, colCosts);
        int expected = 18;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> startPos = {0, 0};
        vector<int> homePos = {0, 0};
        vector<int> rowCosts = {5};
        vector<int> colCosts = {26};
        auto localResult = solution.minCost(startPos, homePos, rowCosts, colCosts);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
