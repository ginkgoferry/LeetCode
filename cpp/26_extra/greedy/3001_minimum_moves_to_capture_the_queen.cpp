/*
 * Problem: 3001. 捕获黑皇后需要的最少移动次数 / Minimum Moves to Capture The Queen
 * Link: https://leetcode.cn/problems/minimum-moves-to-capture-the-queen/
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
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        // TODO: 在这里实现你的解法。
        (void)a;
        (void)b;
        (void)c;
        (void)d;
        (void)e;
        (void)f;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int a = 1;
        int b = 1;
        int c = 8;
        int d = 8;
        int e = 2;
        int f = 3;
        auto localResult = solution.minMovesToCaptureTheQueen(a, b, c, d, e, f);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int a = 5;
        int b = 3;
        int c = 3;
        int d = 4;
        int e = 5;
        int f = 2;
        auto localResult = solution.minMovesToCaptureTheQueen(a, b, c, d, e, f);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
