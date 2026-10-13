/*
 * Problem: 2379. 得到 K 个黑块的最少涂色次数 / Minimum Recolors to Get K Consecutive Black Blocks
 * Link: https://leetcode.cn/problems/minimum-recolors-to-get-k-consecutive-black-blocks/
 * Chapter: 滑动窗口
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
    int minimumRecolors(string blocks, int k) {
        // TODO: 在这里实现你的解法。
        (void)blocks;
        (void)k;
        return 0;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string blocks = "WBBWWBBWBW";
        int k = 7;
        auto localResult = solution.minimumRecolors(blocks, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string blocks = "WBWBBBW";
        int k = 2;
        auto localResult = solution.minimumRecolors(blocks, k);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string blocks = "W";
        int k = 1;
        auto localResult = solution.minimumRecolors(blocks, k);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
