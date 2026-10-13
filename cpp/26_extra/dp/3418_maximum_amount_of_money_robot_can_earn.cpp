/*
 * Problem: 3418. 机器人可以获得的最大金币数 / Maximum Amount of Money Robot Can Earn
 * Link: https://leetcode.cn/problems/maximum-amount-of-money-robot-can-earn/
 * Chapter: 动态规划
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
    int maximumAmount(vector<vector<int>>& coins) {
        // TODO: 在这里实现你的解法。
        (void)coins;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> coins = {{0, 1, -1}, {1, -2, 3}, {2, -3, 4}};
        auto localResult = solution.maximumAmount(coins);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> coins = {{10, 10, 10}, {10, 10, 10}};
        auto localResult = solution.maximumAmount(coins);
        int expected = 40;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
