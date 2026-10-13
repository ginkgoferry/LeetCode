/*
 * Problem: 2749. 得到整数零需要执行的最少操作数 / Minimum Operations to Make the Integer Zero
 * Link: https://leetcode.cn/problems/minimum-operations-to-make-the-integer-zero/
 * Chapter: 位运算
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
    int makeTheIntegerZero(int num1, int num2) {
        // TODO: 在这里实现你的解法。
        (void)num1;
        (void)num2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int num1 = 3;
        int num2 = -2;
        auto localResult = solution.makeTheIntegerZero(num1, num2);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num1 = 5;
        int num2 = 7;
        auto localResult = solution.makeTheIntegerZero(num1, num2);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
