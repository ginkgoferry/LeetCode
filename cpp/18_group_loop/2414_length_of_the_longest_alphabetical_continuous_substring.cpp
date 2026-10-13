/*
 * Problem: 2414. 最长的字母序连续子字符串的长度 / Length of the Longest Alphabetical Continuous Substring
 * Link: https://leetcode.cn/problems/length-of-the-longest-alphabetical-continuous-substring/
 * Chapter: 分组循环
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
    int longestContinuousSubstring(string s) {
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
        string s = "abacaba";
        auto localResult = solution.longestContinuousSubstring(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcde";
        auto localResult = solution.longestContinuousSubstring(s);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = "a";
        auto localResult = solution.longestContinuousSubstring(s);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
