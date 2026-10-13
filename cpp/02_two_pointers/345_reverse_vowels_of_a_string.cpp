/*
 * Problem: 345. 反转字符串中的元音字母 / Reverse Vowels of a String
 * Link: https://leetcode.cn/problems/reverse-vowels-of-a-string/
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
    string reverseVowels(string s) {
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
        string s = "IceCreAm";
        auto localResult = solution.reverseVowels(s);
        string expected = "AceCreIm";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "leetcode";
        auto localResult = solution.reverseVowels(s);
        string expected = "leotcede";
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = "a";
        auto localResult = solution.reverseVowels(s);
        string expected = "a";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
