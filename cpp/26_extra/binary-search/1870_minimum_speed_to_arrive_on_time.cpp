/*
 * Problem: 1870. 准时到达的列车最小时速 / Minimum Speed to Arrive on Time
 * Link: https://leetcode.cn/problems/minimum-speed-to-arrive-on-time/
 * Chapter: 二分查找
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
    int minSpeedOnTime(vector<int>& dist, double hour) {
        // TODO: 在这里实现你的解法。
        (void)dist;
        (void)hour;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> dist = {1, 3, 2};
        double hour = 6;
        auto localResult = solution.minSpeedOnTime(dist, hour);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> dist = {1, 3, 2};
        double hour = 2.7;
        auto localResult = solution.minSpeedOnTime(dist, hour);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> dist = {1, 3, 2};
        double hour = 1.9;
        auto localResult = solution.minSpeedOnTime(dist, hour);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
