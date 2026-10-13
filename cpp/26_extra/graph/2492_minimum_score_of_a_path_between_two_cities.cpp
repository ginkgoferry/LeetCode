/*
 * Problem: 2492. 两个城市间路径的最小分数 / Minimum Score of a Path Between Two Cities
 * Link: https://leetcode.cn/problems/minimum-score-of-a-path-between-two-cities/
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
    int minScore(int n, vector<vector<int>>& roads) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)roads;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> roads = {{1, 2, 9}, {2, 3, 6}, {2, 4, 5}, {1, 4, 7}};
        auto localResult = solution.minScore(n, roads);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> roads = {{1, 2, 2}, {1, 3, 4}, {3, 4, 7}};
        auto localResult = solution.minScore(n, roads);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
