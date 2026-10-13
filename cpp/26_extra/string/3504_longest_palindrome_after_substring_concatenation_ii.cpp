/*
 * Problem: 3504. 子字符串连接后的最长回文串 II / Longest Palindrome After Substring Concatenation II
 * Link: https://leetcode.cn/problems/longest-palindrome-after-substring-concatenation-ii/
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
    int longestPalindrome(string s, string t) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)t;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "a";
        string t = "a";
        auto localResult = solution.longestPalindrome(s, t);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abc";
        string t = "def";
        auto localResult = solution.longestPalindrome(s, t);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "b";
        string t = "aaaa";
        auto localResult = solution.longestPalindrome(s, t);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcde";
        string t = "ecdba";
        auto localResult = solution.longestPalindrome(s, t);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
