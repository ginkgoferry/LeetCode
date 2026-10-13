/*
 * Problem: 1443. 收集树上所有苹果的最少时间 / Minimum Time to Collect All Apples in a Tree
 * Link: https://leetcode.cn/problems/minimum-time-to-collect-all-apples-in-a-tree/
 * Chapter: 树与回溯
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
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)hasApple;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 7;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 4}, {1, 5}, {2, 3}, {2, 6}};
        vector<bool> hasApple = {false, false, true, false, true, true, false};
        auto localResult = solution.minTime(n, edges, hasApple);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 7;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 4}, {1, 5}, {2, 3}, {2, 6}};
        vector<bool> hasApple = {false, false, true, false, false, true, false};
        auto localResult = solution.minTime(n, edges, hasApple);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 7;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 4}, {1, 5}, {2, 3}, {2, 6}};
        vector<bool> hasApple = {false, false, false, false, false, false, false};
        auto localResult = solution.minTime(n, edges, hasApple);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
