/*
 * Problem: 712. 两个字符串的最小ASCII删除和 / Minimum ASCII Delete Sum for Two Strings
 * Link: https://leetcode.cn/problems/minimum-ascii-delete-sum-for-two-strings/
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
    int minimumDeleteSum(string s1, string s2) {
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
        string s1 = "sea";
        string s2 = "eat";
        auto localResult = solution.minimumDeleteSum(s1, s2);
        int expected = 231;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s1 = "delete";
        string s2 = "leet";
        auto localResult = solution.minimumDeleteSum(s1, s2);
        int expected = 403;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
