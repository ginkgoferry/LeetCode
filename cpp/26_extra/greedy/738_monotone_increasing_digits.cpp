/*
 * Problem: 738. 单调递增的数字 / Monotone Increasing Digits
 * Link: https://leetcode.cn/problems/monotone-increasing-digits/
 * Chapter: 贪心算法
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
    int monotoneIncreasingDigits(int n) {
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
        int n = 10;
        auto localResult = solution.monotoneIncreasingDigits(n);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 1234;
        auto localResult = solution.monotoneIncreasingDigits(n);
        int expected = 1234;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 332;
        auto localResult = solution.monotoneIncreasingDigits(n);
        int expected = 299;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
