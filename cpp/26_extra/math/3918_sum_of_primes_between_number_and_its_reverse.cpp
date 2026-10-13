/*
 * Problem: 3918. 数与其逆序数之间的质数和 / Sum of Primes Between Number and Its Reverse
 * Link: https://leetcode.cn/problems/sum-of-primes-between-number-and-its-reverse/
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
    int sumOfPrimesInRange(int n) {
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
        int n = 13;
        auto localResult = solution.sumOfPrimesInRange(n);
        int expected = 132;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 10;
        auto localResult = solution.sumOfPrimesInRange(n);
        int expected = 17;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 8;
        auto localResult = solution.sumOfPrimesInRange(n);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
