/*
 * Problem: 3855. 给定范围内 K 位数字之和 / Sum of K-Digit Numbers in a Range
 * Link: https://leetcode.cn/problems/sum-of-k-digit-numbers-in-a-range/
 * Chapter: 贪心算法
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
    int sumOfNumbers(int l, int r, int k) {
        // TODO: 在这里实现你的解法。
        (void)l;
        (void)r;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int l = 1;
        int r = 2;
        int k = 2;
        auto localResult = solution.sumOfNumbers(l, r, k);
        int expected = 66;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int l = 0;
        int r = 1;
        int k = 3;
        auto localResult = solution.sumOfNumbers(l, r, k);
        int expected = 444;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int l = 5;
        int r = 5;
        int k = 10;
        auto localResult = solution.sumOfNumbers(l, r, k);
        int expected = 555555520;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
