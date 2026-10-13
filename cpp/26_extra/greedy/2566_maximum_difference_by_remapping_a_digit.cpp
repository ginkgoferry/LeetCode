/*
 * Problem: 2566. 替换一个数字后的最大差值 / Maximum Difference by Remapping a Digit
 * Link: https://leetcode.cn/problems/maximum-difference-by-remapping-a-digit/
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
    int minMaxDifference(int num) {
        // TODO: 在这里实现你的解法。
        (void)num;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int num = 11891;
        auto localResult = solution.minMaxDifference(num);
        int expected = 99009;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 90;
        auto localResult = solution.minMaxDifference(num);
        int expected = 99;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
