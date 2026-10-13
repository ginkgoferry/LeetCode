/*
 * Problem: 1802. 有界数组中指定下标处的最大值 / Maximum Value at a Given Index in a Bounded Array
 * Link: https://leetcode.cn/problems/maximum-value-at-a-given-index-in-a-bounded-array/
 * Chapter: 二分查找
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
    int maxValue(int n, int index, int maxSum) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)index;
        (void)maxSum;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        int index = 2;
        int maxSum = 6;
        auto localResult = solution.maxValue(n, index, maxSum);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 6;
        int index = 1;
        int maxSum = 10;
        auto localResult = solution.maxValue(n, index, maxSum);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
