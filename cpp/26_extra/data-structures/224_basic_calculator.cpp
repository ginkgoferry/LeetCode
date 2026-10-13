/*
 * Problem: 224. 基本计算器 / Basic Calculator
 * Link: https://leetcode.cn/problems/basic-calculator/
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
    int calculate(string s) {
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
        string s = "1 + 1";
        auto localResult = solution.calculate(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = " 2-1 + 2 ";
        auto localResult = solution.calculate(s);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "(1+(4+5+2)-3)+(6+8)";
        auto localResult = solution.calculate(s);
        int expected = 23;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
