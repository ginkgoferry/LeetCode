/*
 * Problem: 557. 反转字符串中的单词 III / Reverse Words in a String III
 * Link: https://leetcode.cn/problems/reverse-words-in-a-string-iii/
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
        string s = "Let's take LeetCode contest";
        auto localResult = solution.reverseWords(s);
        string expected = "s'teL ekat edoCteeL tsetnoc";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "Mr Ding";
        auto localResult = solution.reverseWords(s);
        string expected = "rM gniD";
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = "a";
        auto localResult = solution.reverseWords(s);
        string expected = "a";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
