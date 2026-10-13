/*
 * Problem: 2463. 最小移动总距离 / Minimum Total Distance Traveled
 * Link: https://leetcode.cn/problems/minimum-total-distance-traveled/
 * Chapter: 图论
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
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        // TODO: 在这里实现你的解法。
        (void)robot;
        (void)factory;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> robot = {0, 4, 6};
        vector<vector<int>> factory = {{2, 2}, {6, 2}};
        auto localResult = solution.minimumTotalDistance(robot, factory);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> robot = {1, -1};
        vector<vector<int>> factory = {{-2, 1}, {2, 1}};
        auto localResult = solution.minimumTotalDistance(robot, factory);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
