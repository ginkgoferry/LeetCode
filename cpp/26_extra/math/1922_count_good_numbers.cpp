/*
 * Problem: 1922. 统计好数字的数目 / Count Good Numbers
 * Link: https://leetcode.cn/problems/count-good-numbers/
 * Chapter: 数学
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
    int countGoodNumbers(long long n) {
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
        long long n = 1LL;
        auto localResult = solution.countGoodNumbers(n);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long n = 4LL;
        auto localResult = solution.countGoodNumbers(n);
        int expected = 400;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long n = 50LL;
        auto localResult = solution.countGoodNumbers(n);
        int expected = 564908303;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
