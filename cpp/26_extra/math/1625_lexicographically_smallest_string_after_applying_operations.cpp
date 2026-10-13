/*
 * Problem: 1625. 执行操作后字典序最小的字符串 / Lexicographically Smallest String After Applying Operations
 * Link: https://leetcode.cn/problems/lexicographically-smallest-string-after-applying-operations/
 * Chapter: 数学
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
    string findLexSmallestString(string s, int a, int b) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)a;
        (void)b;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "5525";
        int a = 9;
        int b = 2;
        auto localResult = solution.findLexSmallestString(s, a, b);
        string expected = "2050";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "74";
        int a = 5;
        int b = 1;
        auto localResult = solution.findLexSmallestString(s, a, b);
        string expected = "24";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "0011";
        int a = 4;
        int b = 2;
        auto localResult = solution.findLexSmallestString(s, a, b);
        string expected = "0011";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
