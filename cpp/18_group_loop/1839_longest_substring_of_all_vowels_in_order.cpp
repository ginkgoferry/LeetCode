/*
 * Problem: 1839. 所有元音按顺序排布的最长子字符串 / Longest Substring Of All Vowels in Order
 * Link: https://leetcode.cn/problems/longest-substring-of-all-vowels-in-order/
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
    int longestBeautifulSubstring(string word) {
        // TODO: 在这里实现你的解法。
        (void)word;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word = "aeiaaioaaaaeiiiiouuuooaauuaeiu";
        auto localResult = solution.longestBeautifulSubstring(word);
        int expected = 13;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "aeeeiiiioooauuuaeiou";
        auto localResult = solution.longestBeautifulSubstring(word);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "a";
        auto localResult = solution.longestBeautifulSubstring(word);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string word = "a";
        auto localResult = solution.longestBeautifulSubstring(word);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
