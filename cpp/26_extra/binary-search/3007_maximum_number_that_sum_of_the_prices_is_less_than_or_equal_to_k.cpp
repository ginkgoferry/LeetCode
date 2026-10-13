/*
 * Problem: 3007. 价值和小于等于 K 的最大数字 / Maximum Number That Sum of the Prices Is Less Than or Equal to K
 * Link: https://leetcode.cn/problems/maximum-number-that-sum-of-the-prices-is-less-than-or-equal-to-k/
 * Chapter: 二分查找
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
    long long findMaximumNumber(long long k, int x) {
        // TODO: 在这里实现你的解法。
        (void)k;
        (void)x;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        long long k = 9LL;
        int x = 1;
        auto localResult = solution.findMaximumNumber(k, x);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long k = 7LL;
        int x = 2;
        auto localResult = solution.findMaximumNumber(k, x);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
