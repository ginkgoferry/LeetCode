/*
 * Problem: 2699. 修改图中的边权 / Modify Graph Edge Weights
 * Link: https://leetcode.cn/problems/modify-graph-edge-weights/
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
    vector<vector<int>> modifiedGraphEdges(int n, vector<vector<int>>& edges, int source, int destination, int target) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)source;
        (void)destination;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> edges = {{4, 1, -1}, {2, 0, -1}, {0, 3, -1}, {4, 3, -1}};
        int source = 0;
        int destination = 1;
        int target = 5;
        auto localResult = solution.modifiedGraphEdges(n, edges, source, destination, target);
        vector<vector<int>> expected = {{4, 1, 1}, {2, 0, 1}, {0, 3, 3}, {4, 3, 1}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1, -1}, {0, 2, 5}};
        int source = 0;
        int destination = 2;
        int target = 6;
        auto localResult = solution.modifiedGraphEdges(n, edges, source, destination, target);
        vector<vector<int>> expected = {};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> edges = {{1, 0, 4}, {1, 2, 3}, {2, 3, 5}, {0, 3, -1}};
        int source = 0;
        int destination = 2;
        int target = 6;
        auto localResult = solution.modifiedGraphEdges(n, edges, source, destination, target);
        vector<vector<int>> expected = {{1, 0, 4}, {1, 2, 3}, {2, 3, 5}, {0, 3, 1}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
