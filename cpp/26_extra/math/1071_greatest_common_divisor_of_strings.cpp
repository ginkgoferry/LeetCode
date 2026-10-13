/*
 * Problem: 1071. 字符串的最大公因子 / Greatest Common Divisor of Strings
 * Link: https://leetcode.cn/problems/greatest-common-divisor-of-strings/
 * Chapter: 数学
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
    string gcdOfStrings(string str1, string str2) {
        // TODO: 在这里实现你的解法。
        (void)str1;
        (void)str2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string str1 = "ABCABC";
        string str2 = "ABC";
        auto localResult = solution.gcdOfStrings(str1, str2);
        string expected = "ABC";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string str1 = "ABABAB";
        string str2 = "ABAB";
        auto localResult = solution.gcdOfStrings(str1, str2);
        string expected = "AB";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string str1 = "LEET";
        string str2 = "CODE";
        auto localResult = solution.gcdOfStrings(str1, str2);
        string expected = "";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string str1 = "AAAAAB";
        string str2 = "AAA";
        auto localResult = solution.gcdOfStrings(str1, str2);
        string expected = "";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
