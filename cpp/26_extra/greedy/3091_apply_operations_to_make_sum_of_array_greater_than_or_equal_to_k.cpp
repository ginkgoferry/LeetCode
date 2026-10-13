/*
 * Problem: 3091. 执行操作使数据元素之和大于等于 K / Apply Operations to Make Sum of Array Greater Than or Equal to k
 * Link: https://leetcode.cn/problems/apply-operations-to-make-sum-of-array-greater-than-or-equal-to-k/
 * Chapter: 数学
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
    int minOperations(int k) {
        // TODO: 在这里实现你的解法。
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int k = 11;
        auto localResult = solution.minOperations(k);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 1;
        auto localResult = solution.minOperations(k);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
