/*
 * Problem: 1514. 概率最大的路径 / Path with Maximum Probability
 * Link: https://leetcode.cn/problems/path-with-maximum-probability/
 * Chapter: 图论
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
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)succProb;
        (void)start_node;
        (void)end_node;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {0, 2}};
        vector<double> succProb = {0.5, 0.5, 0.2};
        int start_node = 0;
        int end_node = 2;
        auto localResult = solution.maxProbability(n, edges, succProb, start_node, end_node);
        double expected = 0.25;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {0, 2}};
        vector<double> succProb = {0.5, 0.5, 0.3};
        int start_node = 0;
        int end_node = 2;
        auto localResult = solution.maxProbability(n, edges, succProb, start_node, end_node);
        double expected = 0.3;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}};
        vector<double> succProb = {0.5};
        int start_node = 0;
        int end_node = 2;
        auto localResult = solution.maxProbability(n, edges, succProb, start_node, end_node);
        double expected = 0.0;
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
