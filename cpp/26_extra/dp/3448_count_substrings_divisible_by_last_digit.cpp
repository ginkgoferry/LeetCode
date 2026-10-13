/*
 * Problem: 3448. 统计可以被最后一个数位整除的子字符串数目 / Count Substrings Divisible By Last Digit
 * Link: https://leetcode.cn/problems/count-substrings-divisible-by-last-digit/
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
    long long countSubstrings(string s) {
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
        string s = "12936";
        auto localResult = solution.countSubstrings(s);
        long long expected = 11LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "5701283";
        auto localResult = solution.countSubstrings(s);
        long long expected = 18LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "1010101010";
        auto localResult = solution.countSubstrings(s);
        long long expected = 25LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
