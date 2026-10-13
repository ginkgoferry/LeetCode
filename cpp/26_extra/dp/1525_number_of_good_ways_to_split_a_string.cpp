/*
 * Problem: 1525. 字符串的好分割数目 / Number of Good Ways to Split a String
 * Link: https://leetcode.cn/problems/number-of-good-ways-to-split-a-string/
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
    int numSplits(string s) {
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
        string s = "aacaba";
        auto localResult = solution.numSplits(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcd";
        auto localResult = solution.numSplits(s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aaaaa";
        auto localResult = solution.numSplits(s);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "acbadbaada";
        auto localResult = solution.numSplits(s);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
