/*
 * Problem: 1129. 颜色交替的最短路径 / Shortest Path with Alternating Colors
 * Link: https://leetcode.cn/problems/shortest-path-with-alternating-colors/
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
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)redEdges;
        (void)blueEdges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> redEdges = {{0, 1}, {1, 2}};
        vector<vector<int>> blueEdges = {};
        auto localResult = solution.shortestAlternatingPaths(n, redEdges, blueEdges);
        vector<int> expected = {0, 1, -1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> redEdges = {{0, 1}};
        vector<vector<int>> blueEdges = {{2, 1}};
        auto localResult = solution.shortestAlternatingPaths(n, redEdges, blueEdges);
        vector<int> expected = {0, 1, -1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
