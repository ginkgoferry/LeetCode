/*
 * Problem: 1221. 分割平衡字符串 / Split a String in Balanced Strings
 * Link: https://leetcode.cn/problems/split-a-string-in-balanced-strings/
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
    int balancedStringSplit(string s) {
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
        string s = "RLRRLLRLRL";
        auto localResult = solution.balancedStringSplit(s);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "RLRRRLLRLL";
        auto localResult = solution.balancedStringSplit(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "LLLLRRRR";
        auto localResult = solution.balancedStringSplit(s);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
