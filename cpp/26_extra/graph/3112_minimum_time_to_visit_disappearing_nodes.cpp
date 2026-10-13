/*
 * Problem: 3112. 访问消失节点的最少时间 / Minimum Time to Visit Disappearing Nodes
 * Link: https://leetcode.cn/problems/minimum-time-to-visit-disappearing-nodes/
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
    vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)disappear;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1, 2}, {1, 2, 1}, {0, 2, 4}};
        vector<int> disappear = {1, 1, 5};
        auto localResult = solution.minimumTime(n, edges, disappear);
        vector<int> expected = {0, -1, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1, 2}, {1, 2, 1}, {0, 2, 4}};
        vector<int> disappear = {1, 3, 5};
        auto localResult = solution.minimumTime(n, edges, disappear);
        vector<int> expected = {0, 2, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        vector<vector<int>> edges = {{0, 1, 1}};
        vector<int> disappear = {1, 1};
        auto localResult = solution.minimumTime(n, edges, disappear);
        vector<int> expected = {0, -1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
