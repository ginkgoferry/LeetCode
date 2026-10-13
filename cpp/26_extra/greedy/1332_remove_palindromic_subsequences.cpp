/*
 * Problem: 1332. 删除回文子序列 / Remove Palindromic Subsequences
 * Link: https://leetcode.cn/problems/remove-palindromic-subsequences/
 * Chapter: 贪心算法
 * Difficulty: Easy
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
    int removePalindromeSub(string s) {
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
        string s = "ababa";
        auto localResult = solution.removePalindromeSub(s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abb";
        auto localResult = solution.removePalindromeSub(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "baabb";
        auto localResult = solution.removePalindromeSub(s);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
