/*
 * Problem: 190. 颠倒二进制位 / Reverse Bits
 * Link: https://leetcode.cn/problems/reverse-bits/
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
    int reverseBits(int n) {
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
        int n = 43261596;
        auto localResult = solution.reverseBits(n);
        int expected = 964176192;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2147483644;
        auto localResult = solution.reverseBits(n);
        int expected = 1073741822;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
