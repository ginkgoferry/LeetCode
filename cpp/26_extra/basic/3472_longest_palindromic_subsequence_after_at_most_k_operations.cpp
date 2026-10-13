/*
 * Problem: 3472. 至多 K 次操作后的最长回文子序列 / Longest Palindromic Subsequence After at Most K Operations
 * Link: https://leetcode.cn/problems/longest-palindromic-subsequence-after-at-most-k-operations/
 * Chapter: 动态规划
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
    int longestPalindromicSubsequence(string s, int k) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abced";
        int k = 2;
        auto localResult = solution.longestPalindromicSubsequence(s, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aaazzz";
        int k = 4;
        auto localResult = solution.longestPalindromicSubsequence(s, k);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
