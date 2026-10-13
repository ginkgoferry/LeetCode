/*
 * Problem: 2538. 最大价值和与最小价值和的差值 / Difference Between Maximum and Minimum Price Sum
 * Link: https://leetcode.cn/problems/difference-between-maximum-and-minimum-price-sum/
 * Chapter: 动态规划
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
    long long maxOutput(int n, vector<vector<int>>& edges, vector<int>& price) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)price;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 6;
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {1, 3}, {3, 4}, {3, 5}};
        vector<int> price = {9, 8, 7, 6, 10, 5};
        auto localResult = solution.maxOutput(n, edges, price);
        long long expected = 24LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}, {1, 2}};
        vector<int> price = {1, 1, 1};
        auto localResult = solution.maxOutput(n, edges, price);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
