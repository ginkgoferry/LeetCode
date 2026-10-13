/*
 * Problem: 1434. 每个人戴不同帽子的方案数 / Number of Ways to Wear Different Hats to Each Other
 * Link: https://leetcode.cn/problems/number-of-ways-to-wear-different-hats-to-each-other/
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
    int numberWays(vector<vector<int>>& hats) {
        // TODO: 在这里实现你的解法。
        (void)hats;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> hats = {{3, 4}, {4, 5}, {5}};
        auto localResult = solution.numberWays(hats);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> hats = {{3, 5, 1}, {3, 5}};
        auto localResult = solution.numberWays(hats);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> hats = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
        auto localResult = solution.numberWays(hats);
        int expected = 24;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
