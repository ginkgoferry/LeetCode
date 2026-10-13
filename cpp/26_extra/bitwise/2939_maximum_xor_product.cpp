/*
 * Problem: 2939. 最大异或乘积 / Maximum Xor Product
 * Link: https://leetcode.cn/problems/maximum-xor-product/
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
    int maximumXorProduct(long long a, long long b, int n) {
        // TODO: 在这里实现你的解法。
        (void)a;
        (void)b;
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        long long a = 12LL;
        long long b = 5LL;
        int n = 4;
        auto localResult = solution.maximumXorProduct(a, b, n);
        int expected = 98;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long a = 6LL;
        long long b = 7LL;
        int n = 5;
        auto localResult = solution.maximumXorProduct(a, b, n);
        int expected = 930;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long a = 1LL;
        long long b = 6LL;
        int n = 3;
        auto localResult = solution.maximumXorProduct(a, b, n);
        int expected = 12;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
