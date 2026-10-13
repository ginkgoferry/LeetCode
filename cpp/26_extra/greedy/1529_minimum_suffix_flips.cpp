/*
 * Problem: 1529. 最少的后缀翻转次数 / Minimum Suffix Flips
 * Link: https://leetcode.cn/problems/minimum-suffix-flips/
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
    int minFlips(string target) {
        // TODO: 在这里实现你的解法。
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string target = "10111";
        auto localResult = solution.minFlips(target);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string target = "101";
        auto localResult = solution.minFlips(target);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string target = "00000";
        auto localResult = solution.minFlips(target);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
