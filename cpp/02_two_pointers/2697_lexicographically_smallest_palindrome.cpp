/*
 * Problem: 2697. 字典序最小回文串 / Lexicographically Smallest Palindrome
 * Link: https://leetcode.cn/problems/lexicographically-smallest-palindrome/
 * Chapter: 双指针
 * Difficulty: Easy
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
    string makeSmallestPalindrome(string s) {
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
        string s = "egcfe";
        auto localResult = solution.makeSmallestPalindrome(s);
        string expected = "efcfe";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcd";
        auto localResult = solution.makeSmallestPalindrome(s);
        string expected = "abba";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "seven";
        auto localResult = solution.makeSmallestPalindrome(s);
        string expected = "neven";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
