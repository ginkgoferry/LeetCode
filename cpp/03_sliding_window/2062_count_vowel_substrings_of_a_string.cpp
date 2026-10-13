/*
 * Problem: 2062. 统计字符串中的元音子字符串 / Count Vowel Substrings of a String
 * Link: https://leetcode.cn/problems/count-vowel-substrings-of-a-string/
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
    int countVowelSubstrings(string word) {
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
        string word = "aeiouu";
        auto localResult = solution.countVowelSubstrings(word);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "unicornarihan";
        auto localResult = solution.countVowelSubstrings(word);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "cuaieuouac";
        auto localResult = solution.countVowelSubstrings(word);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "bbaeixoubb";
        auto localResult = solution.countVowelSubstrings(word);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
