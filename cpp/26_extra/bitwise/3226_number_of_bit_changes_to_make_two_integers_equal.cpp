/*
 * Problem: 3226. 使两个整数相等的位更改次数 / Number of Bit Changes to Make Two Integers Equal
 * Link: https://leetcode.cn/problems/number-of-bit-changes-to-make-two-integers-equal/
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
    int minChanges(int n, int k) {
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
        int n = 13;
        int k = 4;
        auto localResult = solution.minChanges(n, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 21;
        int k = 21;
        auto localResult = solution.minChanges(n, k);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 14;
        int k = 13;
        auto localResult = solution.minChanges(n, k);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
