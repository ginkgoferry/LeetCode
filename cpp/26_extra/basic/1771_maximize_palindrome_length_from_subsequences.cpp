/*
 * Problem: 1771. 由子序列构造的最长回文串的长度 / Maximize Palindrome Length From Subsequences
 * Link: https://leetcode.cn/problems/maximize-palindrome-length-from-subsequences/
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
    int longestPalindrome(string word1, string word2) {
        // TODO: 在这里实现你的解法。
        (void)word1;
        (void)word2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word1 = "cacb";
        string word2 = "cbba";
        auto localResult = solution.longestPalindrome(word1, word2);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "ab";
        string word2 = "ab";
        auto localResult = solution.longestPalindrome(word1, word2);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "aa";
        string word2 = "bb";
        auto localResult = solution.longestPalindrome(word1, word2);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
