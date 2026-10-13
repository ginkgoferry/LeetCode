/*
 * Problem: 3772. 树中子图的最大得分 / Maximum Subgraph Score in a Tree
 * Link: https://leetcode.cn/problems/maximum-subgraph-score-in-a-tree/
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
    vector<int> maxSubgraphScore(int n, vector<vector<int>>& edges, vector<int>& good) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)good;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}, {1, 2}};
        vector<int> good = {1, 0, 1};
        auto localResult = solution.maxSubgraphScore(n, edges, good);
        vector<int> expected = {1, 1, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> edges = {{1, 0}, {1, 2}, {1, 3}, {3, 4}};
        vector<int> good = {0, 1, 0, 1, 1};
        auto localResult = solution.maxSubgraphScore(n, edges, good);
        vector<int> expected = {2, 3, 2, 3, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        vector<vector<int>> edges = {{0, 1}};
        vector<int> good = {0, 0};
        auto localResult = solution.maxSubgraphScore(n, edges, good);
        vector<int> expected = {-1, -1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
