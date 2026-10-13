/*
 * Problem: 1015. 可被 K 整除的最小整数 / Smallest Integer Divisible by K
 * Link: https://leetcode.cn/problems/smallest-integer-divisible-by-k/
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
    int smallestRepunitDivByK(int k) {
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
        int k = 1;
        auto localResult = solution.smallestRepunitDivByK(k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 2;
        auto localResult = solution.smallestRepunitDivByK(k);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 3;
        auto localResult = solution.smallestRepunitDivByK(k);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
