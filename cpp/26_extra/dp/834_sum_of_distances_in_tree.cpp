/*
 * Problem: 834. 树中距离之和 / Sum of Distances in Tree
 * Link: https://leetcode.cn/problems/sum-of-distances-in-tree/
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
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 6;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {2, 3}, {2, 4}, {2, 5}};
        auto localResult = solution.sumOfDistancesInTree(n, edges);
        vector<int> expected = {8, 12, 6, 10, 10, 10};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 1;
        vector<vector<int>> edges = {};
        auto localResult = solution.sumOfDistancesInTree(n, edges);
        vector<int> expected = {0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        vector<vector<int>> edges = {{1, 0}};
        auto localResult = solution.sumOfDistancesInTree(n, edges);
        vector<int> expected = {1, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
