/*
 * Problem: 3530. 有向无环图中合法拓扑排序的最大利润 / Maximum Profit from Valid Topological Order in DAG
 * Link: https://leetcode.cn/problems/maximum-profit-from-valid-topological-order-in-dag/
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
    int maxProfit(int n, vector<vector<int>>& edges, vector<int>& score) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)score;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        vector<vector<int>> edges = {{0, 1}};
        vector<int> score = {2, 3};
        auto localResult = solution.maxProfit(n, edges, score);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}, {0, 2}};
        vector<int> score = {1, 6, 3};
        auto localResult = solution.maxProfit(n, edges, score);
        int expected = 25;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
