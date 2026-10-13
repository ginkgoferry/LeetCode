/*
 * Problem: 150. 逆波兰表达式求值 / Evaluate Reverse Polish Notation
 * Link: https://leetcode.cn/problems/evaluate-reverse-polish-notation/
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
    int evalRPN(vector<string>& tokens) {
        // TODO: 在这里实现你的解法。
        (void)tokens;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> tokens = {"2", "1", "+", "3", "*"};
        auto localResult = solution.evalRPN(tokens);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> tokens = {"4", "13", "5", "/", "+"};
        auto localResult = solution.evalRPN(tokens);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> tokens = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
        auto localResult = solution.evalRPN(tokens);
        int expected = 22;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
