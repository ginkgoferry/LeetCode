/*
 * Problem: 1857. 有向图中最大颜色值 / Largest Color Value in a Directed Graph
 * Link: https://leetcode.cn/problems/largest-color-value-in-a-directed-graph/
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
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        // TODO: 在这里实现你的解法。
        (void)colors;
        (void)edges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string colors = "abaca";
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {2, 3}, {3, 4}};
        auto localResult = solution.largestPathValue(colors, edges);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string colors = "a";
        vector<vector<int>> edges = {{0, 0}};
        auto localResult = solution.largestPathValue(colors, edges);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
