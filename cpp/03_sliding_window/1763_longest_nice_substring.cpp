/*
 * Problem: 1763. 最长的美好子字符串 / Longest Nice Substring
 * Link: https://leetcode.cn/problems/longest-nice-substring/
 * Chapter: 滑动窗口
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
    string longestNiceSubstring(string s) {
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
        string s = "YazaAay";
        auto localResult = solution.longestNiceSubstring(s);
        string expected = "aAa";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "Bb";
        auto localResult = solution.longestNiceSubstring(s);
        string expected = "Bb";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "c";
        auto localResult = solution.longestNiceSubstring(s);
        string expected = "";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "dDzeE";
        auto localResult = solution.longestNiceSubstring(s);
        string expected = "dD";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
