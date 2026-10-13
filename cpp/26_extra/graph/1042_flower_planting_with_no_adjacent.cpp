/*
 * Problem: 1042. 不邻接植花 / Flower Planting With No Adjacent
 * Link: https://leetcode.cn/problems/flower-planting-with-no-adjacent/
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
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)paths;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> paths = {{1, 2}, {2, 3}, {3, 1}};
        const auto localOriginalPaths = paths;
        auto localResult = solution.gardenNoAdj(n, paths);
        assert(localResult.size() == static_cast<size_t>(n));
        for (int color : localResult) assert(color >= 1 && color <= 4);
        for (const auto& edge : localOriginalPaths) assert(localResult[edge[0]-1] != localResult[edge[1]-1]);
    }

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> paths = {{1, 2}, {3, 4}};
        const auto localOriginalPaths = paths;
        auto localResult = solution.gardenNoAdj(n, paths);
        assert(localResult.size() == static_cast<size_t>(n));
        for (int color : localResult) assert(color >= 1 && color <= 4);
        for (const auto& edge : localOriginalPaths) assert(localResult[edge[0]-1] != localResult[edge[1]-1]);
    }

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> paths = {{1, 2}, {2, 3}, {3, 4}, {4, 1}, {1, 3}, {2, 4}};
        const auto localOriginalPaths = paths;
        auto localResult = solution.gardenNoAdj(n, paths);
        assert(localResult.size() == static_cast<size_t>(n));
        for (int color : localResult) assert(color >= 1 && color <= 4);
        for (const auto& edge : localOriginalPaths) assert(localResult[edge[0]-1] != localResult[edge[1]-1]);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
