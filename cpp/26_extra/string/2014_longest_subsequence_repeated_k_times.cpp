/*
 * Problem: 2014. 重复 K 次的最长子序列 / Longest Subsequence Repeated k Times
 * Link: https://leetcode.cn/problems/longest-subsequence-repeated-k-times/
 * Chapter: 树与回溯
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
    string longestSubsequenceRepeatedK(string s, int k) {
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
        string s = "letsleetcode";
        int k = 2;
        auto localResult = solution.longestSubsequenceRepeatedK(s, k);
        string expected = "let";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "bb";
        int k = 2;
        auto localResult = solution.longestSubsequenceRepeatedK(s, k);
        string expected = "b";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "ab";
        int k = 2;
        auto localResult = solution.longestSubsequenceRepeatedK(s, k);
        string expected = "";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
