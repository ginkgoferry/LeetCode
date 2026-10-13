/*
 * Problem: 1190. 反转每对括号间的子串 / Reverse Substrings Between Each Pair of Parentheses
 * Link: https://leetcode.cn/problems/reverse-substrings-between-each-pair-of-parentheses/
 * Chapter: 数据结构
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
    string reverseParentheses(string s) {
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
        string s = "(abcd)";
        auto localResult = solution.reverseParentheses(s);
        string expected = "dcba";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "(u(love)i)";
        auto localResult = solution.reverseParentheses(s);
        string expected = "iloveu";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "(ed(et(oc))el)";
        auto localResult = solution.reverseParentheses(s);
        string expected = "leetcode";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
