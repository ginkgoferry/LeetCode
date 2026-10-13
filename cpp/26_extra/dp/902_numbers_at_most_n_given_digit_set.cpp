/*
 * Problem: 902. 最大为 N 的数字组合 / Numbers At Most N Given Digit Set
 * Link: https://leetcode.cn/problems/numbers-at-most-n-given-digit-set/
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
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        // TODO: 在这里实现你的解法。
        (void)digits;
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> digits = {"1", "3", "5", "7"};
        int n = 100;
        auto localResult = solution.atMostNGivenDigitSet(digits, n);
        int expected = 20;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> digits = {"1", "4", "9"};
        int n = 1000000000;
        auto localResult = solution.atMostNGivenDigitSet(digits, n);
        int expected = 29523;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> digits = {"7"};
        int n = 8;
        auto localResult = solution.atMostNGivenDigitSet(digits, n);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
