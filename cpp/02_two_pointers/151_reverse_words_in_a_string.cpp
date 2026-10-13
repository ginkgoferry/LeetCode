/*
 * Problem: 151. 反转字符串中的单词 / Reverse Words in a String
 * Link: https://leetcode.cn/problems/reverse-words-in-a-string/
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
    string reverseWords(string s) {
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
        string s = "the sky is blue";
        auto localResult = solution.reverseWords(s);
        string expected = "blue is sky the";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "  hello world  ";
        auto localResult = solution.reverseWords(s);
        string expected = "world hello";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "a good   example";
        auto localResult = solution.reverseWords(s);
        string expected = "example good a";
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = " a ";
        auto localResult = solution.reverseWords(s);
        string expected = "a";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
