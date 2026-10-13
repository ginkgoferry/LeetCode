/*
 * Problem: 1328. 破坏回文串 / Break a Palindrome
 * Link: https://leetcode.cn/problems/break-a-palindrome/
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
    string breakPalindrome(string palindrome) {
        // TODO: 在这里实现你的解法。
        (void)palindrome;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string palindrome = "abccba";
        auto localResult = solution.breakPalindrome(palindrome);
        string expected = "aaccba";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string palindrome = "a";
        auto localResult = solution.breakPalindrome(palindrome);
        string expected = "";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
