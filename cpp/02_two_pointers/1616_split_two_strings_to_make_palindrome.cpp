/*
 * Problem: 1616. 分割两个字符串得到回文串 / Split Two Strings to Make Palindrome
 * Link: https://leetcode.cn/problems/split-two-strings-to-make-palindrome/
 * Chapter: 双指针
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
    bool checkPalindromeFormation(string a, string b) {
        // TODO: 在这里实现你的解法。
        (void)a;
        (void)b;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string a = "x";
        string b = "y";
        auto localResult = solution.checkPalindromeFormation(a, b);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string a = "xbdef";
        string b = "xecab";
        auto localResult = solution.checkPalindromeFormation(a, b);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string a = "ulacfd";
        string b = "jizalu";
        auto localResult = solution.checkPalindromeFormation(a, b);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
