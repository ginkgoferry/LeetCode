/*
 * Problem: 2825. 循环增长使字符串子序列等于另一个字符串 / Make String a Subsequence Using Cyclic Increments
 * Link: https://leetcode.cn/problems/make-string-a-subsequence-using-cyclic-increments/
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
    bool canMakeSubsequence(string str1, string str2) {
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
        string str1 = "abc";
        string str2 = "ad";
        auto localResult = solution.canMakeSubsequence(str1, str2);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string str1 = "zc";
        string str2 = "ad";
        auto localResult = solution.canMakeSubsequence(str1, str2);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string str1 = "ab";
        string str2 = "d";
        auto localResult = solution.canMakeSubsequence(str1, str2);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string str1 = "a";
        string str2 = "b";
        auto localResult = solution.canMakeSubsequence(str1, str2);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
