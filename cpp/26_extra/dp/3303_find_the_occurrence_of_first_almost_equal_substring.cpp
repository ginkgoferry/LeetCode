/*
 * Problem: 3303. 第一个几乎相等子字符串的下标 / Find the Occurrence of First Almost Equal Substring
 * Link: https://leetcode.cn/problems/find-the-occurrence-of-first-almost-equal-substring/
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
    int minStartingIndex(string s, string pattern) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)pattern;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abcdefg";
        string pattern = "bcdffg";
        auto localResult = solution.minStartingIndex(s, pattern);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "ababbababa";
        string pattern = "bacaba";
        auto localResult = solution.minStartingIndex(s, pattern);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcd";
        string pattern = "dba";
        auto localResult = solution.minStartingIndex(s, pattern);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "dde";
        string pattern = "d";
        auto localResult = solution.minStartingIndex(s, pattern);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
