/*
 * Problem: 1137. 第 N 个泰波那契数 / N-th Tribonacci Number
 * Link: https://leetcode.cn/problems/n-th-tribonacci-number/
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
    int tribonacci(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        auto localResult = solution.tribonacci(n);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 25;
        auto localResult = solution.tribonacci(n);
        int expected = 1389537;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
