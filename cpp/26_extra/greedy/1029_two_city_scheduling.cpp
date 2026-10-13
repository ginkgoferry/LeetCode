/*
 * Problem: 1029. 两地调度 / Two City Scheduling
 * Link: https://leetcode.cn/problems/two-city-scheduling/
 * Chapter: 贪心算法
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
    int twoCitySchedCost(vector<vector<int>>& costs) {
        // TODO: 在这里实现你的解法。
        (void)costs;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> costs = {{10, 20}, {30, 200}, {400, 50}, {30, 20}};
        auto localResult = solution.twoCitySchedCost(costs);
        int expected = 110;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> costs = {{259, 770}, {448, 54}, {926, 667}, {184, 139}, {840, 118}, {577, 469}};
        auto localResult = solution.twoCitySchedCost(costs);
        int expected = 1859;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> costs = {{515, 563}, {451, 713}, {537, 709}, {343, 819}, {855, 779}, {457, 60}, {650, 359}, {631, 42}};
        auto localResult = solution.twoCitySchedCost(costs);
        int expected = 3086;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
