/*
 * Problem: 2532. 过桥的时间 / Time to Cross a Bridge
 * Link: https://leetcode.cn/problems/time-to-cross-a-bridge/
 * Chapter: 数据结构
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
    int findCrossingTime(int n, int k, vector<vector<int>>& time) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)k;
        (void)time;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 1;
        int k = 3;
        vector<vector<int>> time = {{1, 1, 2, 1}, {1, 1, 3, 1}, {1, 1, 4, 1}};
        auto localResult = solution.findCrossingTime(n, k, time);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        int k = 2;
        vector<vector<int>> time = {{1, 5, 1, 8}, {10, 10, 10, 10}};
        auto localResult = solution.findCrossingTime(n, k, time);
        int expected = 37;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
