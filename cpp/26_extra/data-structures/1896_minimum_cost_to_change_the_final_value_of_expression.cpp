/*
 * Problem: 1896. 反转表达式值的最少操作次数 / Minimum Cost to Change the Final Value of Expression
 * Link: https://leetcode.cn/problems/minimum-cost-to-change-the-final-value-of-expression/
 * Chapter: 动态规划
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
    int minOperationsToFlip(string expression) {
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
        string expression = "1&(0|1)";
        auto localResult = solution.minOperationsToFlip(expression);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string expression = "(0&0)&(0&0&0)";
        auto localResult = solution.minOperationsToFlip(expression);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string expression = "(0|(1|0&1))";
        auto localResult = solution.minOperationsToFlip(expression);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
