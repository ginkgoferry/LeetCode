/*
 * Problem: 991. 坏了的计算器 / Broken Calculator
 * Link: https://leetcode.cn/problems/broken-calculator/
 * Chapter: 贪心算法
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
    int brokenCalc(int startValue, int target) {
        // TODO: 在这里实现你的解法。
        (void)startValue;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int startValue = 2;
        int target = 3;
        auto localResult = solution.brokenCalc(startValue, target);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int startValue = 5;
        int target = 8;
        auto localResult = solution.brokenCalc(startValue, target);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int startValue = 3;
        int target = 10;
        auto localResult = solution.brokenCalc(startValue, target);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
