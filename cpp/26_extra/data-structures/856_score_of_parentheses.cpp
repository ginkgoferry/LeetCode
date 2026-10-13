/*
 * Problem: 856. 括号的分数 / Score of Parentheses
 * Link: https://leetcode.cn/problems/score-of-parentheses/
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
    int scoreOfParentheses(string s) {
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
        string s = "()";
        auto localResult = solution.scoreOfParentheses(s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "(())";
        auto localResult = solution.scoreOfParentheses(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "()()";
        auto localResult = solution.scoreOfParentheses(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "(()(()))";
        auto localResult = solution.scoreOfParentheses(s);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
