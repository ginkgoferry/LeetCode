/*
 * Problem: 1106. 解析布尔表达式 / Parsing A Boolean Expression
 * Link: https://leetcode.cn/problems/parsing-a-boolean-expression/
 * Chapter: 数据结构
 * Difficulty: Hard
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
    bool parseBoolExpr(string expression) {
        // TODO: 在这里实现你的解法。
        (void)expression;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string expression = "&(|(f))";
        auto localResult = solution.parseBoolExpr(expression);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string expression = "|(f,f,f,t)";
        auto localResult = solution.parseBoolExpr(expression);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string expression = "!(&(f,t))";
        auto localResult = solution.parseBoolExpr(expression);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
