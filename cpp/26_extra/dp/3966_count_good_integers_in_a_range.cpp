/*
 * Problem: 3966. 统计范围内的好整数 / Count Good Integers in a Range
 * Link: https://leetcode.cn/problems/count-good-integers-in-a-range/
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
    long long goodIntegers(long long l, long long r, int k) {
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
        long long l = 10LL;
        long long r = 15LL;
        int k = 1;
        auto localResult = solution.goodIntegers(l, r, k);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long l = 201LL;
        long long r = 204LL;
        int k = 2;
        auto localResult = solution.goodIntegers(l, r, k);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
