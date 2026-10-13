/*
 * Problem: 917. 仅仅反转字母 / Reverse Only Letters
 * Link: https://leetcode.cn/problems/reverse-only-letters/
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
    string reverseOnlyLetters(string s) {
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
        string s = "ab-cd";
        auto localResult = solution.reverseOnlyLetters(s);
        string expected = "dc-ba";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "a-bC-dEf-ghIj";
        auto localResult = solution.reverseOnlyLetters(s);
        string expected = "j-Ih-gfE-dCba";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "Test1ng-Leet=code-Q!";
        auto localResult = solution.reverseOnlyLetters(s);
        string expected = "Qedo1ct-eeLg=ntse-T!";
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = "-";
        auto localResult = solution.reverseOnlyLetters(s);
        string expected = "-";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
