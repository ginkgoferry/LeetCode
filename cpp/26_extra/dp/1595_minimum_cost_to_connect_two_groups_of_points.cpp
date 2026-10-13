/*
 * Problem: 1595. 连通两组点的最小成本 / Minimum Cost to Connect Two Groups of Points
 * Link: https://leetcode.cn/problems/minimum-cost-to-connect-two-groups-of-points/
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
    int connectTwoGroups(vector<vector<int>>& cost) {
        // TODO: 在这里实现你的解法。
        (void)cost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> cost = {{15, 96}, {36, 2}};
        auto localResult = solution.connectTwoGroups(cost);
        int expected = 17;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> cost = {{1, 3, 5}, {4, 1, 1}, {1, 5, 3}};
        auto localResult = solution.connectTwoGroups(cost);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> cost = {{2, 5, 1}, {3, 4, 7}, {8, 1, 2}, {6, 2, 4}, {3, 8, 8}};
        auto localResult = solution.connectTwoGroups(cost);
        int expected = 10;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
