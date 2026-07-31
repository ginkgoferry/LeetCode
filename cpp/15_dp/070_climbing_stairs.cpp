/*
 * Problem: 70. 爬楼梯 / Climbing Stairs
 * Link: https://leetcode.cn/problems/climbing-stairs/
 * Chapter: 动态规划
 * Difficulty: Easy
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
    int climbStairs(int n) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        int n = 2;
        assert((solution.climbStairs(n) == 2));
    }

    {
        int n = 3;
        assert((solution.climbStairs(n) == 3));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
