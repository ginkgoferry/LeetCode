/*
 * Problem: 770. 基本计算器 IV / Basic Calculator IV
 * Link: https://leetcode.cn/problems/basic-calculator-iv/
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
    vector<string> basicCalculatorIV(string expression, vector<string>& evalvars, vector<int>& evalints) {
        // TODO: 在这里实现你的解法。
        (void)expression;
        (void)evalvars;
        (void)evalints;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string expression = "e + 8 - a + 5";
        vector<string> evalvars = {"e"};
        vector<int> evalints = {1};
        auto localResult = solution.basicCalculatorIV(expression, evalvars, evalints);
        vector<string> expected = {"-1*a", "14"};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string expression = "e - 8 + temperature - pressure";
        vector<string> evalvars = {"e", "temperature"};
        vector<int> evalints = {1, 12};
        auto localResult = solution.basicCalculatorIV(expression, evalvars, evalints);
        vector<string> expected = {"-1*pressure", "5"};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string expression = "(e + 8) * (e - 8)";
        vector<string> evalvars = {};
        vector<int> evalints = {};
        auto localResult = solution.basicCalculatorIV(expression, evalvars, evalints);
        vector<string> expected = {"1*e*e", "-64"};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
