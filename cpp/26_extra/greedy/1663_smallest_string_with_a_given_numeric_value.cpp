/*
 * Problem: 1663. 具有给定数值的最小字符串 / Smallest String With A Given Numeric Value
 * Link: https://leetcode.cn/problems/smallest-string-with-a-given-numeric-value/
 * Chapter: 贪心算法
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
    string getSmallestString(int n, int k) {
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
        int k = 27;
        auto localResult = solution.getSmallestString(n, k);
        string expected = "aay";
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int k = 73;
        auto localResult = solution.getSmallestString(n, k);
        string expected = "aaszz";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
