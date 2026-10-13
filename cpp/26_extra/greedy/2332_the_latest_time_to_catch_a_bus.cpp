/*
 * Problem: 2332. 坐上公交的最晚时间 / The Latest Time to Catch a Bus
 * Link: https://leetcode.cn/problems/the-latest-time-to-catch-a-bus/
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
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        // TODO: 在这里实现你的解法。
        (void)buses;
        (void)passengers;
        (void)capacity;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> buses = {10, 20};
        vector<int> passengers = {2, 17, 18, 19};
        int capacity = 2;
        auto localResult = solution.latestTimeCatchTheBus(buses, passengers, capacity);
        int expected = 16;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> buses = {20, 30, 10};
        vector<int> passengers = {19, 13, 26, 4, 25, 11, 21};
        int capacity = 2;
        auto localResult = solution.latestTimeCatchTheBus(buses, passengers, capacity);
        int expected = 20;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
