/*
 * Problem: 1830. 使字符串有序的最少操作次数 / Minimum Number of Operations to Make String Sorted
 * Link: https://leetcode.cn/problems/minimum-number-of-operations-to-make-string-sorted/
 * Chapter: 数学
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
    int makeStringSorted(string s) {
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
        string s = "cba";
        auto localResult = solution.makeStringSorted(s);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aabaa";
        auto localResult = solution.makeStringSorted(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "cdbea";
        auto localResult = solution.makeStringSorted(s);
        int expected = 63;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "leetcodeleetcodeleetcode";
        auto localResult = solution.makeStringSorted(s);
        int expected = 982157772;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
