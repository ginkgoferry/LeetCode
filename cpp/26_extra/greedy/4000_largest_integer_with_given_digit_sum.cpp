/*
 * Problem: 4000. 给定数位和的最大整数 / Largest Integer With Given Digit Sum
 * Link: https://leetcode.cn/problems/largest-integer-with-given-digit-sum/
 * Chapter: 贪心算法
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
    int largestInteger(int n, int s) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        int s = 9;
        auto localResult = solution.largestInteger(n, s);
        int expected = 90;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        int s = 19;
        auto localResult = solution.largestInteger(n, s);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int s = 0;
        auto localResult = solution.largestInteger(n, s);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
