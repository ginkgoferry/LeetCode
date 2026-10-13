/*
 * Problem: 3928. 购买苹果的最低成本 II / Minimum Cost to Buy Apples II
 * Link: https://leetcode.cn/problems/minimum-cost-to-buy-apples-ii/
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
    vector<int> minCost(int n, vector<int>& prices, vector<vector<int>>& roads) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)prices;
        (void)roads;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        vector<int> prices = {8, 3};
        vector<vector<int>> roads = {{0, 1, 1, 2}};
        auto localResult = solution.minCost(n, prices, roads);
        vector<int> expected = {6, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<int> prices = {9, 4, 6};
        vector<vector<int>> roads = {{0, 1, 1, 3}, {1, 2, 4, 2}};
        auto localResult = solution.minCost(n, prices, roads);
        vector<int> expected = {8, 4, 6};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<int> prices = {10, 11, 1};
        vector<vector<int>> roads = {{0, 2, 1, 3}, {1, 2, 3, 4}, {0, 1, 5, 2}};
        auto localResult = solution.minCost(n, prices, roads);
        vector<int> expected = {5, 11, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
