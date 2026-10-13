/*
 * Problem: 3405. 统计恰好有 K 个相等相邻元素的数组数目 / Count the Number of Arrays with K Matching Adjacent Elements
 * Link: https://leetcode.cn/problems/count-the-number-of-arrays-with-k-matching-adjacent-elements/
 * Chapter: 数学
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
    int countGoodArrays(int n, int m, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)m;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        int m = 2;
        int k = 1;
        auto localResult = solution.countGoodArrays(n, m, k);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        int m = 2;
        int k = 2;
        auto localResult = solution.countGoodArrays(n, m, k);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int m = 2;
        int k = 0;
        auto localResult = solution.countGoodArrays(n, m, k);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
