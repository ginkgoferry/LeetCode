/*
 * Problem: 1866. 恰有 K 根木棍可以看到的排列数目 / Number of Ways to Rearrange Sticks With K Sticks Visible
 * Link: https://leetcode.cn/problems/number-of-ways-to-rearrange-sticks-with-k-sticks-visible/
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
    int rearrangeSticks(int n, int k) {
        // TODO: 在这里实现你的解法。
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
        int n = 3;
        int k = 2;
        auto localResult = solution.rearrangeSticks(n, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int k = 5;
        auto localResult = solution.rearrangeSticks(n, k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 20;
        int k = 11;
        auto localResult = solution.rearrangeSticks(n, k);
        int expected = 647427950;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
