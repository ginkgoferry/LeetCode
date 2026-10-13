/*
 * Problem: 2920. 收集所有金币可获得的最大积分 / Maximum Points After Collecting Coins From All Nodes
 * Link: https://leetcode.cn/problems/maximum-points-after-collecting-coins-from-all-nodes/
 * Chapter: 动态规划
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
    int maximumPoints(vector<vector<int>>& edges, vector<int>& coins, int k) {
        // TODO: 在这里实现你的解法。
        (void)edges;
        (void)coins;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3}};
        vector<int> coins = {10, 10, 3, 3};
        int k = 5;
        auto localResult = solution.maximumPoints(edges, coins, k);
        int expected = 11;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1}, {0, 2}};
        vector<int> coins = {8, 4, 4};
        int k = 0;
        auto localResult = solution.maximumPoints(edges, coins, k);
        int expected = 16;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
