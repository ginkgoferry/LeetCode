/*
 * Problem: 3108. 带权图里旅途的最小代价 / Minimum Cost Walk in Weighted Graph
 * Link: https://leetcode.cn/problems/minimum-cost-walk-in-weighted-graph/
 * Chapter: 位运算
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
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)query;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> edges = {{0, 1, 7}, {1, 3, 7}, {1, 2, 1}};
        vector<vector<int>> query = {{0, 3}, {3, 4}};
        auto localResult = solution.minimumCost(n, edges, query);
        vector<int> expected = {1, -1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 2, 7}, {0, 1, 15}, {1, 2, 6}, {1, 2, 1}};
        vector<vector<int>> query = {{1, 2}};
        auto localResult = solution.minimumCost(n, edges, query);
        vector<int> expected = {0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
