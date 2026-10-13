/*
 * Problem: 3693. 爬楼梯 II / Climbing Stairs II
 * Link: https://leetcode.cn/problems/climbing-stairs-ii/
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
    int climbStairs(int n, vector<int>& costs) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)costs;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        vector<int> costs = {1, 2, 3, 4};
        auto localResult = solution.climbStairs(n, costs);
        int expected = 13;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        vector<int> costs = {5, 1, 6, 2};
        auto localResult = solution.climbStairs(n, costs);
        int expected = 11;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<int> costs = {9, 8, 3};
        auto localResult = solution.climbStairs(n, costs);
        int expected = 12;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
