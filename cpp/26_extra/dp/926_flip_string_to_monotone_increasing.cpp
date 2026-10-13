/*
 * Problem: 926. 将字符串翻转到单调递增 / Flip String to Monotone Increasing
 * Link: https://leetcode.cn/problems/flip-string-to-monotone-increasing/
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
    int minFlipsMonoIncr(string s) {
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
        string s = "00110";
        auto localResult = solution.minFlipsMonoIncr(s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "010110";
        auto localResult = solution.minFlipsMonoIncr(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "00011000";
        auto localResult = solution.minFlipsMonoIncr(s);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
