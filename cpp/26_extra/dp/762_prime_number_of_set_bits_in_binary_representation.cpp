/*
 * Problem: 762. 二进制表示中质数个计算置位 / Prime Number of Set Bits in Binary Representation
 * Link: https://leetcode.cn/problems/prime-number-of-set-bits-in-binary-representation/
 * Chapter: 动态规划
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
    int countPrimeSetBits(int left, int right) {
        // TODO: 在这里实现你的解法。
        (void)left;
        (void)right;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int left = 6;
        int right = 10;
        auto localResult = solution.countPrimeSetBits(left, right);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int left = 10;
        int right = 15;
        auto localResult = solution.countPrimeSetBits(left, right);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
