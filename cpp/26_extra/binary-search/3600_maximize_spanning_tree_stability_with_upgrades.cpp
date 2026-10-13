/*
 * Problem: 3600. 升级后最大生成树稳定性 / Maximize Spanning Tree Stability with Upgrades
 * Link: https://leetcode.cn/problems/maximize-spanning-tree-stability-with-upgrades/
 * Chapter: 二分查找
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
    int maxStability(int n, vector<vector<int>>& edges, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
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
        vector<vector<int>> edges = {{0, 1, 2, 1}, {1, 2, 3, 0}};
        int k = 1;
        auto localResult = solution.maxStability(n, edges, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1, 4, 0}, {1, 2, 3, 0}, {0, 2, 1, 0}};
        int k = 2;
        auto localResult = solution.maxStability(n, edges, k);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1, 1, 1}, {1, 2, 1, 1}, {2, 0, 1, 1}};
        int k = 0;
        auto localResult = solution.maxStability(n, edges, k);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
