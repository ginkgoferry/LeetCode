/*
 * Problem: 882. 细分图中的可到达节点 / Reachable Nodes In Subdivided Graph
 * Link: https://leetcode.cn/problems/reachable-nodes-in-subdivided-graph/
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
    int reachableNodes(vector<vector<int>>& edges, int maxMoves, int n) {
        // TODO: 在这里实现你的解法。
        (void)edges;
        (void)maxMoves;
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1, 10}, {0, 2, 1}, {1, 2, 2}};
        int maxMoves = 6;
        int n = 3;
        auto localResult = solution.reachableNodes(edges, maxMoves, n);
        int expected = 13;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1, 4}, {1, 2, 6}, {0, 2, 8}, {1, 3, 1}};
        int maxMoves = 10;
        int n = 4;
        auto localResult = solution.reachableNodes(edges, maxMoves, n);
        int expected = 23;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{1, 2, 4}, {1, 4, 5}, {1, 3, 1}, {2, 3, 4}, {3, 4, 5}};
        int maxMoves = 17;
        int n = 5;
        auto localResult = solution.reachableNodes(edges, maxMoves, n);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
