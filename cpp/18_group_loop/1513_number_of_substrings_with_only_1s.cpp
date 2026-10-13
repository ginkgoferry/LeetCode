/*
 * Problem: 1513. 仅含 1 的子串数 / Number of Substrings With Only 1s
 * Link: https://leetcode.cn/problems/number-of-substrings-with-only-1s/
 * Chapter: 分组循环
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
    int numSub(string s) {
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
        string s = "0110111";
        auto localResult = solution.numSub(s);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "101";
        auto localResult = solution.numSub(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "111111";
        auto localResult = solution.numSub(s);
        int expected = 21;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "000";
        auto localResult = solution.numSub(s);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = "0";
        auto localResult = solution.numSub(s);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
