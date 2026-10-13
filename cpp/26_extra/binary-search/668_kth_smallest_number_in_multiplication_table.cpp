/*
 * Problem: 668. 乘法表中第k小的数 / Kth Smallest Number in Multiplication Table
 * Link: https://leetcode.cn/problems/kth-smallest-number-in-multiplication-table/
 * Chapter: 二分查找
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
    int findKthNumber(int m, int n, int k) {
        // TODO: 在这里实现你的解法。
        (void)m;
        (void)n;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int m = 3;
        int n = 3;
        int k = 5;
        auto localResult = solution.findKthNumber(m, n, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int m = 2;
        int n = 3;
        int k = 6;
        auto localResult = solution.findKthNumber(m, n, k);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
