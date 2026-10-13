/*
 * Problem: 2220. 转换数字的最少位翻转次数 / Minimum Bit Flips to Convert Number
 * Link: https://leetcode.cn/problems/minimum-bit-flips-to-convert-number/
 * Chapter: 位运算
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
    int minBitFlips(int start, int goal) {
        // TODO: 在这里实现你的解法。
        (void)start;
        (void)goal;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int start = 10;
        int goal = 7;
        auto localResult = solution.minBitFlips(start, goal);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int start = 3;
        int goal = 4;
        auto localResult = solution.minBitFlips(start, goal);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
