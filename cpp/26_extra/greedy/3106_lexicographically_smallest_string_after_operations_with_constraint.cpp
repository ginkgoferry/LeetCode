/*
 * Problem: 3106. 满足距离约束且字典序最小的字符串 / Lexicographically Smallest String After Operations With Constraint
 * Link: https://leetcode.cn/problems/lexicographically-smallest-string-after-operations-with-constraint/
 * Chapter: 贪心算法
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
    string getSmallestString(string s, int k) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "zbbz";
        int k = 3;
        auto localResult = solution.getSmallestString(s, k);
        string expected = "aaaz";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "xaxcd";
        int k = 4;
        auto localResult = solution.getSmallestString(s, k);
        string expected = "aawcd";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "lol";
        int k = 0;
        auto localResult = solution.getSmallestString(s, k);
        string expected = "lol";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
