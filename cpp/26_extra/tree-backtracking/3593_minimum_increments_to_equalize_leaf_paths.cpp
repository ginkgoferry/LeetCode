/*
 * Problem: 3593. 使叶子路径成本相等的最小增量 / Minimum Increments to Equalize Leaf Paths
 * Link: https://leetcode.cn/problems/minimum-increments-to-equalize-leaf-paths/
 * Chapter: 树与回溯
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
    int minIncrease(int n, vector<vector<int>>& edges, vector<int>& cost) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)cost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}, {0, 2}};
        vector<int> cost = {2, 1, 3};
        auto localResult = solution.minIncrease(n, edges, cost);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}, {1, 2}};
        vector<int> cost = {5, 1, 4};
        auto localResult = solution.minIncrease(n, edges, cost);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> edges = {{0, 4}, {0, 1}, {1, 2}, {1, 3}};
        vector<int> cost = {3, 4, 1, 1, 7};
        auto localResult = solution.minIncrease(n, edges, cost);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
