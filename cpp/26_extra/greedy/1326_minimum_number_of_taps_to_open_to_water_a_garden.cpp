/*
 * Problem: 1326. 灌溉花园的最少水龙头数目 / Minimum Number of Taps to Open to Water a Garden
 * Link: https://leetcode.cn/problems/minimum-number-of-taps-to-open-to-water-a-garden/
 * Chapter: 贪心算法
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
    int minTaps(int n, vector<int>& ranges) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)ranges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        vector<int> ranges = {3, 4, 1, 1, 0, 0};
        auto localResult = solution.minTaps(n, ranges);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<int> ranges = {0, 0, 0, 0};
        auto localResult = solution.minTaps(n, ranges);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
