/*
 * Problem: 785. 判断二分图 / Is Graph Bipartite?
 * Link: https://leetcode.cn/problems/is-graph-bipartite/
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
    bool isBipartite(vector<vector<int>>& graph) {
        // TODO: 在这里实现你的解法。
        (void)graph;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> graph = {{1, 2, 3}, {0, 2}, {0, 1, 3}, {0, 2}};
        auto localResult = solution.isBipartite(graph);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> graph = {{1, 3}, {0, 2}, {1, 3}, {0, 2}};
        auto localResult = solution.isBipartite(graph);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
