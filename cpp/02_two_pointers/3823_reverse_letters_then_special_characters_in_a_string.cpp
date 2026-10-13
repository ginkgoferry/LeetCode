/*
 * Problem: 3823. 反转一个字符串里的字母后反转特殊字符 / Reverse Letters Then Special Characters in a String
 * Link: https://leetcode.cn/problems/reverse-letters-then-special-characters-in-a-string/
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
    string reverseByType(string s) {
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
        string s = ")ebc#da@f(";
        auto localResult = solution.reverseByType(s);
        string expected = "(fad@cb#e)";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "z";
        auto localResult = solution.reverseByType(s);
        string expected = "z";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "!@#$%^&*()";
        auto localResult = solution.reverseByType(s);
        string expected = ")(*&^%$#@!";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
