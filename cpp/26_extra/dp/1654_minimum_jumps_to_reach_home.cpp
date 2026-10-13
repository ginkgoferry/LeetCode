/*
 * Problem: 1654. 到家的最少跳跃次数 / Minimum Jumps to Reach Home
 * Link: https://leetcode.cn/problems/minimum-jumps-to-reach-home/
 * Chapter: 图论
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
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        // TODO: 在这里实现你的解法。
        (void)forbidden;
        (void)a;
        (void)b;
        (void)x;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> forbidden = {14, 4, 18, 1, 15};
        int a = 3;
        int b = 15;
        int x = 9;
        auto localResult = solution.minimumJumps(forbidden, a, b, x);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> forbidden = {8, 3, 16, 6, 12, 20};
        int a = 15;
        int b = 13;
        int x = 11;
        auto localResult = solution.minimumJumps(forbidden, a, b, x);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> forbidden = {1, 6, 2, 14, 5, 17, 4};
        int a = 16;
        int b = 9;
        int x = 7;
        auto localResult = solution.minimumJumps(forbidden, a, b, x);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
