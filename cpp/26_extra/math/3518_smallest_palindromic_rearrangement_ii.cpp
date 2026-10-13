/*
 * Problem: 3518. 最小回文排列 II / Smallest Palindromic Rearrangement II
 * Link: https://leetcode.cn/problems/smallest-palindromic-rearrangement-ii/
 * Chapter: 数学
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
    string smallestPalindrome(string s, int k) {
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
        string s = "abba";
        int k = 2;
        auto localResult = solution.smallestPalindrome(s, k);
        string expected = "baab";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aa";
        int k = 2;
        auto localResult = solution.smallestPalindrome(s, k);
        string expected = "";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "bacab";
        int k = 1;
        auto localResult = solution.smallestPalindrome(s, k);
        string expected = "abcba";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
