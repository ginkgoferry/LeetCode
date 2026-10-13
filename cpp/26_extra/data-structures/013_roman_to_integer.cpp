/*
 * Problem: 13. 罗马数字转整数 / Roman to Integer
 * Link: https://leetcode.cn/problems/roman-to-integer/
 * Chapter: 数据结构
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
    int romanToInt(string s) {
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
        string s = "III";
        auto localResult = solution.romanToInt(s);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "IV";
        auto localResult = solution.romanToInt(s);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "IX";
        auto localResult = solution.romanToInt(s);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "LVIII";
        auto localResult = solution.romanToInt(s);
        int expected = 58;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "MCMXCIV";
        auto localResult = solution.romanToInt(s);
        int expected = 1994;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
