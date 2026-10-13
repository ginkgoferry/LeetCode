/*
 * Problem: 1009. 十进制整数的反码 / Complement of Base 10 Integer
 * Link: https://leetcode.cn/problems/complement-of-base-10-integer/
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
    int bitwiseComplement(int n) {
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
        int n = 5;
        auto localResult = solution.bitwiseComplement(n);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 7;
        auto localResult = solution.bitwiseComplement(n);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 10;
        auto localResult = solution.bitwiseComplement(n);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
