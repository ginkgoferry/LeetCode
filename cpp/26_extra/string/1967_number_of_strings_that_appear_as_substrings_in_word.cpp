/*
 * Problem: 1967. 作为子字符串出现在单词中的字符串数目 / Number of Strings That Appear as Substrings in Word
 * Link: https://leetcode.cn/problems/number-of-strings-that-appear-as-substrings-in-word/
 * Chapter: 字符串
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
    int numOfStrings(vector<string>& patterns, string word) {
        // TODO: 在这里实现你的解法。
        (void)patterns;
        (void)word;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> patterns = {"a", "abc", "bc", "d"};
        string word = "abc";
        auto localResult = solution.numOfStrings(patterns, word);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> patterns = {"a", "b", "c"};
        string word = "aaaaabbbbb";
        auto localResult = solution.numOfStrings(patterns, word);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> patterns = {"a", "a", "a"};
        string word = "ab";
        auto localResult = solution.numOfStrings(patterns, word);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
