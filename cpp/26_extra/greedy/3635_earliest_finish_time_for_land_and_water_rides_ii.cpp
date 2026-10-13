/*
 * Problem: 3635. 最早完成陆地和水上游乐设施的时间 II / Earliest Finish Time for Land and Water Rides II
 * Link: https://leetcode.cn/problems/earliest-finish-time-for-land-and-water-rides-ii/
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
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        // TODO: 在这里实现你的解法。
        (void)landStartTime;
        (void)landDuration;
        (void)waterStartTime;
        (void)waterDuration;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> landStartTime = {2, 8};
        vector<int> landDuration = {4, 1};
        vector<int> waterStartTime = {6};
        vector<int> waterDuration = {3};
        auto localResult = solution.earliestFinishTime(landStartTime, landDuration, waterStartTime, waterDuration);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> landStartTime = {5};
        vector<int> landDuration = {3};
        vector<int> waterStartTime = {1};
        vector<int> waterDuration = {10};
        auto localResult = solution.earliestFinishTime(landStartTime, landDuration, waterStartTime, waterDuration);
        int expected = 14;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
