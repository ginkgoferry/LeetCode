/*
 * Problem: 3272. 统计好整数的数目 / Find the Count of Good Integers
 * Link: https://leetcode.cn/problems/find-the-count-of-good-integers/
 * Chapter: 数学
 * Difficulty: Hard
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
    long long countGoodIntegers(int n, int k) {
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
        int k = 5;
        auto localResult = solution.countGoodIntegers(n, k);
        long long expected = 27LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 1;
        int k = 4;
        auto localResult = solution.countGoodIntegers(n, k);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int k = 6;
        auto localResult = solution.countGoodIntegers(n, k);
        long long expected = 2468LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
