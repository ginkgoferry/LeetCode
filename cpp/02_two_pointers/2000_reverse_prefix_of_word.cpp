/*
 * Problem: 2000. 反转单词前缀 / Reverse Prefix of Word
 * Link: https://leetcode.cn/problems/reverse-prefix-of-word/
 * Chapter: 双指针
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
    string reversePrefix(string word, char ch) {
        // TODO: 在这里实现你的解法。
        (void)word;
        (void)ch;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word = "abcdefd";
        char ch = 'd';
        auto localResult = solution.reversePrefix(word, ch);
        string expected = "dcbaefd";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "xyxzxe";
        char ch = 'z';
        auto localResult = solution.reversePrefix(word, ch);
        string expected = "zxyxxe";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "abcd";
        char ch = 'z';
        auto localResult = solution.reversePrefix(word, ch);
        string expected = "abcd";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
