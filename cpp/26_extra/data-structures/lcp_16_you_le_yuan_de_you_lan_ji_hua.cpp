/*
 * Problem: LCP 16. 游乐园的游览计划 / 游乐园的游览计划
 * Link: https://leetcode.cn/problems/you-le-yuan-de-you-lan-ji-hua/
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
    int maxWeight(vector<vector<int>>& edges, vector<int>& value) {
        // TODO: 在这里实现你的解法。
        (void)edges;
        (void)value;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {0, 2}};
        vector<int> value = {1, 2, 3};
        auto localResult = solution.maxWeight(edges, value);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 2}, {2, 1}};
        vector<int> value = {1, 2, 5};
        auto localResult = solution.maxWeight(edges, value);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {0, 3}, {0, 4}, {0, 5}, {1, 3}, {2, 4}, {2, 5}, {3, 4}, {3, 5}, {4, 5}};
        vector<int> value = {7, 8, 6, 8, 9, 7};
        auto localResult = solution.maxWeight(edges, value);
        int expected = 39;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
