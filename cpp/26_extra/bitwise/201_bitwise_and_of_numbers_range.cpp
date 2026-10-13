/*
 * Problem: 201. 数字范围按位与 / Bitwise AND of Numbers Range
 * Link: https://leetcode.cn/problems/bitwise-and-of-numbers-range/
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
    int rangeBitwiseAnd(int left, int right) {
        // TODO: 在这里实现你的解法。
        (void)left;
        (void)right;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int left = 5;
        int right = 7;
        auto localResult = solution.rangeBitwiseAnd(left, right);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int left = 0;
        int right = 0;
        auto localResult = solution.rangeBitwiseAnd(left, right);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int left = 1;
        int right = 2147483647;
        auto localResult = solution.rangeBitwiseAnd(left, right);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
