/*
 * Problem: 1081. 不同字符的最小子序列 / Smallest Subsequence of Distinct Characters
 * Link: https://leetcode.cn/problems/smallest-subsequence-of-distinct-characters/
 * Chapter: 栈
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
    string smallestSubsequence(string s) {
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
        string s = "bcabc";
        auto localResult = solution.smallestSubsequence(s);
        string expected = "abc";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "cbacdcbc";
        auto localResult = solution.smallestSubsequence(s);
        string expected = "acdb";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
