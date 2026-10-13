/*
 * Problem: 3519. 统计逐位非递减的整数 / Count Numbers with Non-Decreasing Digits
 * Link: https://leetcode.cn/problems/count-numbers-with-non-decreasing-digits/
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
    int countNumbers(string l, string r, int b) {
        // TODO: 在这里实现你的解法。
        (void)l;
        (void)r;
        (void)b;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string l = "23";
        string r = "28";
        int b = 8;
        auto localResult = solution.countNumbers(l, r, b);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string l = "2";
        string r = "7";
        int b = 2;
        auto localResult = solution.countNumbers(l, r, b);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
