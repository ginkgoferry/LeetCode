/*
 * Problem: 3980. 变换二进制字符串的最少操作次数 / Minimum Operations to Transform Binary String
 * Link: https://leetcode.cn/problems/minimum-operations-to-transform-binary-string/
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
    int minOperations(string s1, string s2) {
        // TODO: 在这里实现你的解法。
        (void)s1;
        (void)s2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s1 = "11";
        string s2 = "00";
        auto localResult = solution.minOperations(s1, s2);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s1 = "01";
        string s2 = "10";
        auto localResult = solution.minOperations(s1, s2);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s1 = "1";
        string s2 = "0";
        auto localResult = solution.minOperations(s1, s2);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
