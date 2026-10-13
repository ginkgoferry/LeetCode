/*
 * Problem: 1545. 找出第 N 个二进制字符串中的第 K 位 / Find Kth Bit in Nth Binary String
 * Link: https://leetcode.cn/problems/find-kth-bit-in-nth-binary-string/
 * Chapter: 位运算
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
    char findKthBit(int n, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        int k = 1;
        auto localResult = solution.findKthBit(n, k);
        char expected = '0';
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        int k = 11;
        auto localResult = solution.findKthBit(n, k);
        char expected = '1';
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 1;
        int k = 1;
        auto localResult = solution.findKthBit(n, k);
        char expected = '0';
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        int k = 3;
        auto localResult = solution.findKthBit(n, k);
        char expected = '1';
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
