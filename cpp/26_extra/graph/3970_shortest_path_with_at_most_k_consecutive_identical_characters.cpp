/*
 * Problem: 3970. 最多 K 个连续相同字符的最短路径 / Shortest Path With At Most K Consecutive Identical Characters
 * Link: https://leetcode.cn/problems/shortest-path-with-at-most-k-consecutive-identical-characters/
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
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)labels;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1, 1}, {1, 2, 1}, {0, 2, 3}};
        string labels = "aab";
        int k = 1;
        auto localResult = solution.shortestPath(n, edges, labels, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1, 1}, {1, 2, 1}, {0, 2, 3}};
        string labels = "aab";
        int k = 2;
        auto localResult = solution.shortestPath(n, edges, labels, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1, 1}, {1, 2, 1}};
        string labels = "aaa";
        int k = 2;
        auto localResult = solution.shortestPath(n, edges, labels, k);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
