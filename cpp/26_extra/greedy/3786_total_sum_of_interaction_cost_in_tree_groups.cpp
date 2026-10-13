/*
 * Problem: 3786. 树组的交互代价总和 / Total Sum of Interaction Cost in Tree Groups
 * Link: https://leetcode.cn/problems/total-sum-of-interaction-cost-in-tree-groups/
 * Chapter: 贪心算法
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
    long long interactionCosts(int n, vector<vector<int>>& edges, vector<int>& group) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)group;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}, {1, 2}};
        vector<int> group = {1, 1, 1};
        auto localResult = solution.interactionCosts(n, edges, group);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}, {1, 2}};
        vector<int> group = {3, 2, 3};
        auto localResult = solution.interactionCosts(n, edges, group);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {0, 3}};
        vector<int> group = {1, 1, 4, 4};
        auto localResult = solution.interactionCosts(n, edges, group);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        vector<vector<int>> edges = {{0, 1}};
        vector<int> group = {9, 8};
        auto localResult = solution.interactionCosts(n, edges, group);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
