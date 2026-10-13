/*
 * Problem: 730. 统计不同回文子序列 / Count Different Palindromic Subsequences
 * Link: https://leetcode.cn/problems/count-different-palindromic-subsequences/
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
    int countPalindromicSubsequences(string s) {
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
        string s = "bccb";
        auto localResult = solution.countPalindromicSubsequences(s);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcdabcdabcdabcdabcdabcdabcdabcddcbadcbadcbadcbadcbadcbadcbadcba";
        auto localResult = solution.countPalindromicSubsequences(s);
        int expected = 104860361;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
