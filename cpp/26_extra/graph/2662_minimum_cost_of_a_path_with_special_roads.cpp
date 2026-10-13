/*
 * Problem: 2662. 前往目标的最小代价 / Minimum Cost of a Path With Special Roads
 * Link: https://leetcode.cn/problems/minimum-cost-of-a-path-with-special-roads/
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
    int minimumCost(vector<int>& start, vector<int>& target, vector<vector<int>>& specialRoads) {
        // TODO: 在这里实现你的解法。
        (void)start;
        (void)target;
        (void)specialRoads;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> start = {1, 1};
        vector<int> target = {4, 5};
        vector<vector<int>> specialRoads = {{1, 2, 3, 3, 2}, {3, 4, 4, 5, 1}};
        auto localResult = solution.minimumCost(start, target, specialRoads);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> start = {3, 2};
        vector<int> target = {5, 7};
        vector<vector<int>> specialRoads = {{5, 7, 3, 2, 1}, {3, 2, 3, 4, 4}, {3, 3, 5, 5, 5}, {3, 4, 5, 6, 6}};
        auto localResult = solution.minimumCost(start, target, specialRoads);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> start = {1, 1};
        vector<int> target = {10, 4};
        vector<vector<int>> specialRoads = {{4, 2, 1, 1, 3}, {1, 2, 7, 4, 4}, {10, 3, 6, 1, 2}, {6, 1, 1, 2, 3}};
        auto localResult = solution.minimumCost(start, target, specialRoads);
        int expected = 8;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
