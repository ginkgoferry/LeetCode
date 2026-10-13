/*
 * Problem: 1247. 交换字符使得字符串相同 / Minimum Swaps to Make Strings Equal
 * Link: https://leetcode.cn/problems/minimum-swaps-to-make-strings-equal/
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
    int minimumSwap(string s1, string s2) {
        // TODO: 在这里实现你的解法。
        (void)s1;
        (void)s2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s1 = "xx";
        string s2 = "yy";
        auto localResult = solution.minimumSwap(s1, s2);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s1 = "xy";
        string s2 = "yx";
        auto localResult = solution.minimumSwap(s1, s2);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s1 = "xx";
        string s2 = "xy";
        auto localResult = solution.minimumSwap(s1, s2);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
