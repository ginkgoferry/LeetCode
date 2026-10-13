/*
 * Problem: 2872. 可以被 K 整除连通块的最大数目 / Maximum Number of K-Divisible Components
 * Link: https://leetcode.cn/problems/maximum-number-of-k-divisible-components/
 * Chapter: 树与回溯
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
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)values;
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
        vector<vector<int>> edges = {{0, 2}, {1, 2}, {1, 3}, {2, 4}};
        vector<int> values = {1, 8, 1, 4, 4};
        int k = 6;
        auto localResult = solution.maxKDivisibleComponents(n, edges, values, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 7;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}};
        vector<int> values = {3, 0, 6, 1, 5, 2, 1};
        int k = 3;
        auto localResult = solution.maxKDivisibleComponents(n, edges, values, k);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
