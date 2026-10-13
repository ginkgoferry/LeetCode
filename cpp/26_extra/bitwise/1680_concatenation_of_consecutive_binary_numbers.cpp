/*
 * Problem: 1680. 连接连续二进制数字 / Concatenation of Consecutive Binary Numbers
 * Link: https://leetcode.cn/problems/concatenation-of-consecutive-binary-numbers/
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
    int concatenatedBinary(int n) {
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
        int n = 1;
        auto localResult = solution.concatenatedBinary(n);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        auto localResult = solution.concatenatedBinary(n);
        int expected = 27;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 12;
        auto localResult = solution.concatenatedBinary(n);
        int expected = 505379714;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
