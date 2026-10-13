/*
 * Problem: 1960. 两个回文子字符串长度的最大乘积 / Maximum Product of the Length of Two Palindromic Substrings
 * Link: https://leetcode.cn/problems/maximum-product-of-the-length-of-two-palindromic-substrings/
 * Chapter: 字符串
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
    long long maxProduct(string s) {
        // TODO: 在这里实现你的解法。
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "ababbb";
        auto localResult = solution.maxProduct(s);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "zaaaxbbby";
        auto localResult = solution.maxProduct(s);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
