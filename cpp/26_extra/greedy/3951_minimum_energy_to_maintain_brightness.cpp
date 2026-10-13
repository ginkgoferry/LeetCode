/*
 * Problem: 3951. 维持亮度的最小总能量 / Minimum Energy to Maintain Brightness
 * Link: https://leetcode.cn/problems/minimum-energy-to-maintain-brightness/
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
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)brightness;
        (void)intervals;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        int brightness = 5;
        vector<vector<int>> intervals = {{6, 12}};
        auto localResult = solution.minEnergy(n, brightness, intervals);
        long long expected = 14LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        int brightness = 1;
        vector<vector<int>> intervals = {{0, 0}, {2, 2}};
        auto localResult = solution.minEnergy(n, brightness, intervals);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        int brightness = 2;
        vector<vector<int>> intervals = {{1, 3}, {2, 4}};
        auto localResult = solution.minEnergy(n, brightness, intervals);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
