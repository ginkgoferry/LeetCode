/*
 * Problem: 1249. 移除无效的括号 / Minimum Remove to Make Valid Parentheses
 * Link: https://leetcode.cn/problems/minimum-remove-to-make-valid-parentheses/
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
    string minRemoveToMakeValid(string s) {
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
        string s = "lee(t(c)o)de)";
        const auto localOriginalString = s;
        auto localResult = solution.minRemoveToMakeValid(s);
        assert(localResult.size() == 12);
        size_t position = 0;
        for (char ch : localOriginalString) {
            if (position < localResult.size() && localResult[position] == ch) ++position;
            else assert(ch == '(' || ch == ')');
        }
        assert(position == localResult.size());
        int depth = 0;
        for (char ch : localResult) { if (ch == '(') ++depth; if (ch == ')') --depth; assert(depth >= 0); }
        assert(depth == 0);
    }

    {
        // 官方样例
        string s = "a)b(c)d";
        const auto localOriginalString = s;
        auto localResult = solution.minRemoveToMakeValid(s);
        assert(localResult.size() == 6);
        size_t position = 0;
        for (char ch : localOriginalString) {
            if (position < localResult.size() && localResult[position] == ch) ++position;
            else assert(ch == '(' || ch == ')');
        }
        assert(position == localResult.size());
        int depth = 0;
        for (char ch : localResult) { if (ch == '(') ++depth; if (ch == ')') --depth; assert(depth >= 0); }
        assert(depth == 0);
    }

    {
        // 官方样例
        string s = "))((";
        const auto localOriginalString = s;
        auto localResult = solution.minRemoveToMakeValid(s);
        assert(localResult.size() == 0);
        size_t position = 0;
        for (char ch : localOriginalString) {
            if (position < localResult.size() && localResult[position] == ch) ++position;
            else assert(ch == '(' || ch == ')');
        }
        assert(position == localResult.size());
        int depth = 0;
        for (char ch : localResult) { if (ch == '(') ++depth; if (ch == ')') --depth; assert(depth >= 0); }
        assert(depth == 0);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
