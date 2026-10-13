/*
 * Problem: 3515. 带权树中的最短路径 / Shortest Path in a Weighted Tree
 * Link: https://leetcode.cn/problems/shortest-path-in-a-weighted-tree/
 * Chapter: 数据结构
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
    vector<int> treeQueries(int n, vector<vector<int>>& edges, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        vector<vector<int>> edges = {{1, 2, 7}};
        vector<vector<int>> queries = {{2, 2}, {1, 1, 2, 4}, {2, 2}};
        auto localResult = solution.treeQueries(n, edges, queries);
        vector<int> expected = {7, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{1, 2, 2}, {1, 3, 4}};
        vector<vector<int>> queries = {{2, 1}, {2, 3}, {1, 1, 3, 7}, {2, 2}, {2, 3}};
        auto localResult = solution.treeQueries(n, edges, queries);
        vector<int> expected = {0, 4, 2, 7};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> edges = {{1, 2, 2}, {2, 3, 1}, {3, 4, 5}};
        vector<vector<int>> queries = {{2, 4}, {2, 3}, {1, 2, 3, 3}, {2, 2}, {2, 3}};
        auto localResult = solution.treeQueries(n, edges, queries);
        vector<int> expected = {8, 3, 2, 5};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
