/*
 * Problem: 4022. 无限字符串里第 K 个数字 / K-th Digit in Infinite String
 * Link: https://leetcode.cn/problems/k-th-digit-in-infinite-string/
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
    int kthDigit(long long k) {
        // TODO: 在这里实现你的解法。
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        long long k = 4LL;
        auto localResult = solution.kthDigit(k);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long k = 15LL;
        auto localResult = solution.kthDigit(k);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long k = 11LL;
        auto localResult = solution.kthDigit(k);
        int expected = 9;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
