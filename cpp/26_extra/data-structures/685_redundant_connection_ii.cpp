/*
 * Problem: 685. 冗余连接 II / Redundant Connection II
 * Link: https://leetcode.cn/problems/redundant-connection-ii/
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
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
        // TODO: 在这里实现你的解法。
        (void)edges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> edges = {{1, 2}, {1, 3}, {2, 3}};
        auto localResult = solution.findRedundantDirectedConnection(edges);
        vector<int> expected = {2, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{1, 2}, {2, 3}, {3, 4}, {4, 1}, {1, 5}};
        auto localResult = solution.findRedundantDirectedConnection(edges);
        vector<int> expected = {4, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
