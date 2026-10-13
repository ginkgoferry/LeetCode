/*
 * Problem: 3389. 使字符频率相等的最少操作次数 / Minimum Operations to Make Character Frequencies Equal
 * Link: https://leetcode.cn/problems/minimum-operations-to-make-character-frequencies-equal/
 * Chapter: 动态规划
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
    int makeStringGood(string s) {
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
        string s = "acab";
        auto localResult = solution.makeStringGood(s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "wddw";
        auto localResult = solution.makeStringGood(s);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aaabc";
        auto localResult = solution.makeStringGood(s);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
