/*
 * Problem: 1387. 将整数按权重排序 / Sort Integers by The Power Value
 * Link: https://leetcode.cn/problems/sort-integers-by-the-power-value/
 * Chapter: 动态规划
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
    int getKth(int lo, int hi, int k) {
        // TODO: 在这里实现你的解法。
        (void)lo;
        (void)hi;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int lo = 12;
        int hi = 15;
        int k = 2;
        auto localResult = solution.getKth(lo, hi, k);
        int expected = 13;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int lo = 7;
        int hi = 11;
        int k = 4;
        auto localResult = solution.getKth(lo, hi, k);
        int expected = 7;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
