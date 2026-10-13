/*
 * Problem: 1016. 子串能表示从 1 到 N 数字的二进制串 / Binary String With Substrings Representing 1 To N
 * Link: https://leetcode.cn/problems/binary-string-with-substrings-representing-1-to-n/
 * Chapter: 滑动窗口
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
    bool queryString(string s, int n) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "0110";
        int n = 3;
        auto localResult = solution.queryString(s, n);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "0110";
        int n = 4;
        auto localResult = solution.queryString(s, n);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
