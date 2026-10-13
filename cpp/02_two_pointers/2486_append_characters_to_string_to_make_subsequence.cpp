/*
 * Problem: 2486. 追加字符以获得子序列 / Append Characters to String to Make Subsequence
 * Link: https://leetcode.cn/problems/append-characters-to-string-to-make-subsequence/
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
    int appendCharacters(string s, string t) {
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
        // 官方样例
        string s = "coaching";
        string t = "coding";
        auto localResult = solution.appendCharacters(s, t);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcde";
        string t = "a";
        auto localResult = solution.appendCharacters(s, t);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "z";
        string t = "abcde";
        auto localResult = solution.appendCharacters(s, t);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = "a";
        string t = "a";
        auto localResult = solution.appendCharacters(s, t);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
