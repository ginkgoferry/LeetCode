/*
 * Problem: 8. 字符串转换整数 (atoi) / String to Integer (atoi)
 * Link: https://leetcode.cn/problems/string-to-integer-atoi/
 * Chapter: 数据结构
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
    int myAtoi(string s) {
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
        string s = "42";
        auto localResult = solution.myAtoi(s);
        int expected = 42;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = " -042";
        auto localResult = solution.myAtoi(s);
        int expected = -42;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "1337c0d3";
        auto localResult = solution.myAtoi(s);
        int expected = 1337;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "0-1";
        auto localResult = solution.myAtoi(s);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "words and 987";
        auto localResult = solution.myAtoi(s);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
