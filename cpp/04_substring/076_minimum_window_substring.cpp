/*
 * Problem: 76. 最小覆盖子串 / Minimum Window Substring
 * Link: https://leetcode.cn/problems/minimum-window-substring/
 * Chapter: 子串
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
    string minWindow(string s, string t) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)t;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        string s = "ADOBECODEBANC";
        string t = "ABC";
        assert((solution.minWindow(s, t) == "BANC"));
    }

    {
        string s = "a";
        string t = "a";
        assert((solution.minWindow(s, t) == "a"));
    }

    {
        string s = "a";
        string t = "aa";
        assert((solution.minWindow(s, t) == ""));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
