/*
 * Problem: 633. 平方数之和 / Sum of Square Numbers
 * Link: https://leetcode.cn/problems/sum-of-square-numbers/
 * Chapter: 双指针
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
    bool judgeSquareSum(int c) {
        // TODO: 在这里实现你的解法。
        (void)c;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int c = 5;
        auto localResult = solution.judgeSquareSum(c);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int c = 3;
        auto localResult = solution.judgeSquareSum(c);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        int c = 0;
        auto localResult = solution.judgeSquareSum(c);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
