/*
 * Problem: 1864. 构成交替字符串需要的最小交换次数 / Minimum Number of Swaps to Make the Binary String Alternating
 * Link: https://leetcode.cn/problems/minimum-number-of-swaps-to-make-the-binary-string-alternating/
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
    int minSwaps(string s) {
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
        string s = "111000";
        auto localResult = solution.minSwaps(s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "010";
        auto localResult = solution.minSwaps(s);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "1110";
        auto localResult = solution.minSwaps(s);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
