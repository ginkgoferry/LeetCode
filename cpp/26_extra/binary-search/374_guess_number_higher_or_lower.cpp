/*
 * Problem: 374. 猜数字大小 / Guess Number Higher or Lower
 * Link: https://leetcode.cn/problems/guess-number-higher-or-lower/
 * Chapter: 二分查找
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
    int guessNumber(int n) {
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
        localGuessTarget = 6;
        int n = 10;
        auto localResult = solution.guessNumber(n);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        localGuessTarget = 1;
        int n = 1;
        auto localResult = solution.guessNumber(n);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        localGuessTarget = 1;
        int n = 2;
        auto localResult = solution.guessNumber(n);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
