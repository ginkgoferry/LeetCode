/*
 * Problem: 1143. 最长公共子序列 / Longest Common Subsequence
 * Link: https://leetcode.cn/problems/longest-common-subsequence/
 * Chapter: 多维动态规划
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
    int longestCommonSubsequence(string text1, string text2) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        string text1 = "abcde";
        string text2 = "ace";
        assert((solution.longestCommonSubsequence(text1, text2) == 3));
    }

    {
        string text1 = "abc";
        string text2 = "abc";
        assert((solution.longestCommonSubsequence(text1, text2) == 3));
    }

    {
        string text1 = "abc";
        string text2 = "def";
        assert((solution.longestCommonSubsequence(text1, text2) == 0));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
