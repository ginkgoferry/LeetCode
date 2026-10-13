/*
 * Problem: 680. 验证回文串 II / Valid Palindrome II
 * Link: https://leetcode.cn/problems/valid-palindrome-ii/
 * Chapter: 贪心算法
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
    bool validPalindrome(string s) {
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
        string s = "aba";
        auto localResult = solution.validPalindrome(s);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abca";
        auto localResult = solution.validPalindrome(s);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abc";
        auto localResult = solution.validPalindrome(s);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
