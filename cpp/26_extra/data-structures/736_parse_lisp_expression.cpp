/*
 * Problem: 736. Lisp 语法解析 / Parse Lisp Expression
 * Link: https://leetcode.cn/problems/parse-lisp-expression/
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
    int evaluate(string expression) {
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
        string expression = "(let x 2 (mult x (let x 3 y 4 (add x y))))";
        auto localResult = solution.evaluate(expression);
        int expected = 14;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string expression = "(let x 3 x 2 x)";
        auto localResult = solution.evaluate(expression);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string expression = "(let x 1 y 2 x (add x y) (add x y))";
        auto localResult = solution.evaluate(expression);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
