/*
 * Problem: 3628. 插入一个字母的最大子序列数 / Maximum Number of Subsequences After One Inserting
 * Link: https://leetcode.cn/problems/maximum-number-of-subsequences-after-one-inserting/
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
    long long numOfSubsequences(string s) {
        // TODO: 在这里实现你的解法。
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "LMCT";
        auto localResult = solution.numOfSubsequences(s);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "LCCT";
        auto localResult = solution.numOfSubsequences(s);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "L";
        auto localResult = solution.numOfSubsequences(s);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
