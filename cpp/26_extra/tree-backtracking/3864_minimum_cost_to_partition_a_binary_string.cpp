/*
 * Problem: 3864. 划分二进制字符串的最小费用 / Minimum Cost to Partition a Binary String
 * Link: https://leetcode.cn/problems/minimum-cost-to-partition-a-binary-string/
 * Chapter: 树与回溯
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
    long long minCost(string s, int encCost, int flatCost) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)encCost;
        (void)flatCost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "1010";
        int encCost = 2;
        int flatCost = 1;
        auto localResult = solution.minCost(s, encCost, flatCost);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "1010";
        int encCost = 3;
        int flatCost = 10;
        auto localResult = solution.minCost(s, encCost, flatCost);
        long long expected = 12LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "00";
        int encCost = 1;
        int flatCost = 2;
        auto localResult = solution.minCost(s, encCost, flatCost);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
