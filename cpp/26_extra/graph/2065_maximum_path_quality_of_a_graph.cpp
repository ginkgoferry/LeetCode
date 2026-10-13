/*
 * Problem: 2065. 最大化一张图中的路径价值 / Maximum Path Quality of a Graph
 * Link: https://leetcode.cn/problems/maximum-path-quality-of-a-graph/
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
    int maximalPathQuality(vector<int>& values, vector<vector<int>>& edges, int maxTime) {
        // TODO: 在这里实现你的解法。
        (void)values;
        (void)edges;
        (void)maxTime;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> values = {0, 32, 10, 43};
        vector<vector<int>> edges = {{0, 1, 10}, {1, 2, 15}, {0, 3, 10}};
        int maxTime = 49;
        auto localResult = solution.maximalPathQuality(values, edges, maxTime);
        int expected = 75;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> values = {5, 10, 15, 20};
        vector<vector<int>> edges = {{0, 1, 10}, {1, 2, 10}, {0, 3, 10}};
        int maxTime = 30;
        auto localResult = solution.maximalPathQuality(values, edges, maxTime);
        int expected = 25;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> values = {1, 2, 3, 4};
        vector<vector<int>> edges = {{0, 1, 10}, {1, 2, 11}, {2, 3, 12}, {1, 3, 13}};
        int maxTime = 50;
        auto localResult = solution.maximalPathQuality(values, edges, maxTime);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> values = {0, 1, 2};
        vector<vector<int>> edges = {{1, 2, 10}};
        int maxTime = 10;
        auto localResult = solution.maximalPathQuality(values, edges, maxTime);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
