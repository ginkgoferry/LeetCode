/*
 * Problem: 1318. 或运算的最小翻转次数 / Minimum Flips to Make a OR b Equal to c
 * Link: https://leetcode.cn/problems/minimum-flips-to-make-a-or-b-equal-to-c/
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
    int minFlips(int a, int b, int c) {
        // TODO: 在这里实现你的解法。
        (void)a;
        (void)b;
        (void)c;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int a = 2;
        int b = 6;
        int c = 5;
        auto localResult = solution.minFlips(a, b, c);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int a = 4;
        int b = 2;
        int c = 7;
        auto localResult = solution.minFlips(a, b, c);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int a = 1;
        int b = 2;
        int c = 3;
        auto localResult = solution.minFlips(a, b, c);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
