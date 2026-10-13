/*
 * Problem: 2131. 连接两字母单词得到的最长回文串 / Longest Palindrome by Concatenating Two Letter Words
 * Link: https://leetcode.cn/problems/longest-palindrome-by-concatenating-two-letter-words/
 * Chapter: 贪心算法
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
    int longestPalindrome(vector<string>& words) {
        // TODO: 在这里实现你的解法。
        (void)words;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> words = {"lc", "cl", "gg"};
        auto localResult = solution.longestPalindrome(words);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"ab", "ty", "yt", "lc", "cl", "ab"};
        auto localResult = solution.longestPalindrome(words);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"cc", "ll", "xx"};
        auto localResult = solution.longestPalindrome(words);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
