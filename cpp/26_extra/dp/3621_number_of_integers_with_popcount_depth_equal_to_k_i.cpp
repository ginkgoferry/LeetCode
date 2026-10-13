/*
 * Problem: 3621. 位计数深度为 K 的整数数目 I / Number of Integers With Popcount-Depth Equal to K I
 * Link: https://leetcode.cn/problems/number-of-integers-with-popcount-depth-equal-to-k-i/
 * Chapter: 动态规划
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
    long long popcountDepth(long long n, int k) {
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
        int k = 1;
        auto localResult = solution.popcountDepth(n, k);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long n = 7LL;
        int k = 2;
        auto localResult = solution.popcountDepth(n, k);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
