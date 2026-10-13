/*
 * Problem: 3419. 图的最大边权的最小值 / Minimize the Maximum Edge Weight of Graph
 * Link: https://leetcode.cn/problems/minimize-the-maximum-edge-weight-of-graph/
 * Chapter: 二分查找
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
    int minMaxWeight(int n, vector<vector<int>>& edges, int threshold) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)threshold;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> edges = {{1, 0, 1}, {2, 0, 2}, {3, 0, 1}, {4, 3, 1}, {2, 1, 1}};
        int threshold = 2;
        auto localResult = solution.minMaxWeight(n, edges, threshold);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> edges = {{0, 1, 1}, {0, 2, 2}, {0, 3, 1}, {0, 4, 1}, {1, 2, 1}, {1, 4, 1}};
        int threshold = 1;
        auto localResult = solution.minMaxWeight(n, edges, threshold);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> edges = {{1, 2, 1}, {1, 3, 3}, {1, 4, 5}, {2, 3, 2}, {3, 4, 2}, {4, 0, 1}};
        int threshold = 1;
        auto localResult = solution.minMaxWeight(n, edges, threshold);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> edges = {{1, 2, 1}, {1, 3, 3}, {1, 4, 5}, {2, 3, 2}, {4, 0, 1}};
        int threshold = 1;
        auto localResult = solution.minMaxWeight(n, edges, threshold);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
