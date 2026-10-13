/*
 * Problem: 3123. 最短路径中的边 / Find Edges in Shortest Paths
 * Link: https://leetcode.cn/problems/find-edges-in-shortest-paths/
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
    vector<bool> findAnswer(int n, vector<vector<int>>& edges) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 6;
        vector<vector<int>> edges = {{0, 1, 4}, {0, 2, 1}, {1, 3, 2}, {1, 4, 3}, {1, 5, 1}, {2, 3, 1}, {3, 5, 3}, {4, 5, 2}};
        auto localResult = solution.findAnswer(n, edges);
        vector<bool> expected = {true, true, true, false, true, true, true, false};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> edges = {{2, 0, 1}, {0, 1, 1}, {0, 3, 4}, {3, 2, 2}};
        auto localResult = solution.findAnswer(n, edges);
        vector<bool> expected = {true, false, false, true};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
