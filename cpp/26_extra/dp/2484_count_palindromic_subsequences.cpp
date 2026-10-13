/*
 * Problem: 2484. 统计回文子序列数目 / Count Palindromic Subsequences
 * Link: https://leetcode.cn/problems/count-palindromic-subsequences/
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
    int countPalindromes(string s) {
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
        string s = "103301";
        auto localResult = solution.countPalindromes(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "0000000";
        auto localResult = solution.countPalindromes(s);
        int expected = 21;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "9999900000";
        auto localResult = solution.countPalindromes(s);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
