/*
 * Problem: 3260. 找出最大的 N 位 K 回文数 / Find the Largest Palindrome Divisible by K
 * Link: https://leetcode.cn/problems/find-the-largest-palindrome-divisible-by-k/
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
    string largestPalindrome(int n, int k) {
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
        auto localResult = solution.largestPalindrome(n, k);
        string expected = "595";
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 1;
        int k = 4;
        auto localResult = solution.largestPalindrome(n, k);
        string expected = "8";
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int k = 6;
        auto localResult = solution.largestPalindrome(n, k);
        string expected = "89898";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
