/*
 * Problem: 3821. 二进制中恰好K个1的第N小整数 / Find Nth Smallest Integer With K One Bits
 * Link: https://leetcode.cn/problems/find-nth-smallest-integer-with-k-one-bits/
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
    long long nthSmallest(long long n, int k) {
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
        long long n = 4LL;
        int k = 2;
        auto localResult = solution.nthSmallest(n, k);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long n = 3LL;
        int k = 1;
        auto localResult = solution.nthSmallest(n, k);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
