/*
 * Problem: LCP 54. 夺回据点 / 夺回据点
 * Link: https://leetcode.cn/problems/s5kipK/
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
    long long minimumCost(vector<int>& cost, vector<vector<int>>& roads) {
        // TODO: 在这里实现你的解法。
        (void)cost;
        (void)roads;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> cost = {1, 2, 3, 4, 5, 6};
        vector<vector<int>> roads = {{0, 1}, {0, 2}, {1, 3}, {2, 3}, {1, 2}, {2, 4}, {2, 5}};
        auto localResult = solution.minimumCost(cost, roads);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cost = {3, 2, 1, 4};
        vector<vector<int>> roads = {{0, 2}, {2, 3}, {3, 1}};
        auto localResult = solution.minimumCost(cost, roads);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
