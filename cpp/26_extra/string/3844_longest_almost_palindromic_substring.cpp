/*
 * Problem: 3844. 最长的准回文子字符串 / Longest Almost-Palindromic Substring
 * Link: https://leetcode.cn/problems/longest-almost-palindromic-substring/
 * Chapter: 字符串
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
    int almostPalindromic(string s) {
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
        string s = "abca";
        auto localResult = solution.almostPalindromic(s);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abba";
        auto localResult = solution.almostPalindromic(s);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "zzabba";
        auto localResult = solution.almostPalindromic(s);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
