/*
 * Problem: 2182. 构造限制重复的字符串 / Construct String With Repeat Limit
 * Link: https://leetcode.cn/problems/construct-string-with-repeat-limit/
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
    string repeatLimitedString(string s, int repeatLimit) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)repeatLimit;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "cczazcc";
        int repeatLimit = 3;
        auto localResult = solution.repeatLimitedString(s, repeatLimit);
        string expected = "zzcccac";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aababab";
        int repeatLimit = 2;
        auto localResult = solution.repeatLimitedString(s, repeatLimit);
        string expected = "bbabaa";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
