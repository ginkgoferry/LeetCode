/*
 * Problem: 1201. 丑数 III / Ugly Number III
 * Link: https://leetcode.cn/problems/ugly-number-iii/
 * Chapter: 二分查找
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
    int nthUglyNumber(int n, int a, int b, int c) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)a;
        (void)b;
        (void)c;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        int a = 2;
        int b = 3;
        int c = 5;
        auto localResult = solution.nthUglyNumber(n, a, b, c);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        int a = 2;
        int b = 3;
        int c = 4;
        auto localResult = solution.nthUglyNumber(n, a, b, c);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int a = 2;
        int b = 11;
        int c = 13;
        auto localResult = solution.nthUglyNumber(n, a, b, c);
        int expected = 10;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
