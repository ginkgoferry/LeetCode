/*
 * Problem: 1930. 长度为 3 的不同回文子序列 / Unique Length-3 Palindromic Subsequences
 * Link: https://leetcode.cn/problems/unique-length-3-palindromic-subsequences/
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
    int countPalindromicSubsequence(string s) {
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
        string s = "aabca";
        auto localResult = solution.countPalindromicSubsequence(s);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "adc";
        auto localResult = solution.countPalindromicSubsequence(s);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "bbcbaba";
        auto localResult = solution.countPalindromicSubsequence(s);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
