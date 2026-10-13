/*
 * Problem: 3613. 最小化连通分量的最大成本 / Minimize Maximum Component Cost
 * Link: https://leetcode.cn/problems/minimize-maximum-component-cost/
 * Chapter: 二分查找
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
    int minCost(int n, vector<vector<int>>& edges, int k) {
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
        int n = 5;
        vector<vector<int>> edges = {{0, 1, 4}, {1, 2, 3}, {1, 3, 2}, {3, 4, 6}};
        int k = 2;
        auto localResult = solution.minCost(n, edges, k);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> edges = {{0, 1, 5}, {1, 2, 5}, {2, 3, 5}};
        int k = 1;
        auto localResult = solution.minCost(n, edges, k);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
