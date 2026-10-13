/*
 * Problem: 125. 验证回文串 / Valid Palindrome
 * Link: https://leetcode.cn/problems/valid-palindrome/
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
    bool isPalindrome(string s) {
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
        string s = "A man, a plan, a canal: Panama";
        auto localResult = solution.isPalindrome(s);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "race a car";
        auto localResult = solution.isPalindrome(s);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = " ";
        auto localResult = solution.isPalindrome(s);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = " ";
        auto localResult = solution.isPalindrome(s);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
