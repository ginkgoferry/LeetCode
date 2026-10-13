/*
 * Problem: 3154. 到达第 K 级台阶的方案数 / Find Number of Ways to Reach the K-th Stair
 * Link: https://leetcode.cn/problems/find-number-of-ways-to-reach-the-k-th-stair/
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
    int waysToReachStair(int k) {
        // TODO: 在这里实现你的解法。
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int k = 0;
        auto localResult = solution.waysToReachStair(k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 1;
        auto localResult = solution.waysToReachStair(k);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
