/*
 * Problem: 743. 网络延迟时间 / Network Delay Time
 * Link: https://leetcode.cn/problems/network-delay-time/
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
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // TODO: 在这里实现你的解法。
        (void)times;
        (void)n;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> times = {{2, 1, 1}, {2, 3, 1}, {3, 4, 1}};
        int n = 4;
        int k = 2;
        auto localResult = solution.networkDelayTime(times, n, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> times = {{1, 2, 1}};
        int n = 2;
        int k = 1;
        auto localResult = solution.networkDelayTime(times, n, k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> times = {{1, 2, 1}};
        int n = 2;
        int k = 2;
        auto localResult = solution.networkDelayTime(times, n, k);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
