/*
 * Problem: 1414. 和为 K 的最少斐波那契数字数目 / Find the Minimum Number of Fibonacci Numbers Whose Sum Is K
 * Link: https://leetcode.cn/problems/find-the-minimum-number-of-fibonacci-numbers-whose-sum-is-k/
 * Chapter: 数学
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
    int findMinFibonacciNumbers(int k) {
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
        int k = 7;
        auto localResult = solution.findMinFibonacciNumbers(k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 10;
        auto localResult = solution.findMinFibonacciNumbers(k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 19;
        auto localResult = solution.findMinFibonacciNumbers(k);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
