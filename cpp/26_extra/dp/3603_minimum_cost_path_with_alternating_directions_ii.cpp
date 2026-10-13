/*
 * Problem: 3603. 交替方向的最小路径代价 II / Minimum Cost Path with Alternating Directions II
 * Link: https://leetcode.cn/problems/minimum-cost-path-with-alternating-directions-ii/
 * Chapter: 动态规划
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
    long long minCost(int m, int n, vector<vector<int>>& waitCost) {
        // TODO: 在这里实现你的解法。
        (void)m;
        (void)n;
        (void)waitCost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int m = 1;
        int n = 2;
        vector<vector<int>> waitCost = {{1, 2}};
        auto localResult = solution.minCost(m, n, waitCost);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int m = 2;
        int n = 2;
        vector<vector<int>> waitCost = {{3, 5}, {2, 4}};
        auto localResult = solution.minCost(m, n, waitCost);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int m = 2;
        int n = 3;
        vector<vector<int>> waitCost = {{6, 1, 4}, {3, 2, 5}};
        auto localResult = solution.minCost(m, n, waitCost);
        long long expected = 16LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
