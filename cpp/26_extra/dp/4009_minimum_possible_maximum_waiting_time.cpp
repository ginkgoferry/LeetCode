/*
 * Problem: 4009. 最小化最大可能等待时间 / Minimum Possible Maximum Waiting Time
 * Link: https://leetcode.cn/problems/minimum-possible-maximum-waiting-time/
 * Chapter: 动态规划
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
    int minMaxWaitingTime(vector<int>& demand, vector<int>& fuel) {
        // TODO: 在这里实现你的解法。
        (void)demand;
        (void)fuel;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> demand = {6, 8, 4, 6, 5};
        vector<int> fuel = {16, 13};
        auto localResult = solution.minMaxWaitingTime(demand, fuel);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> demand = {10, 15};
        vector<int> fuel = {12, 17};
        auto localResult = solution.minMaxWaitingTime(demand, fuel);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> demand = {10, 5};
        vector<int> fuel = {8, 8};
        auto localResult = solution.minMaxWaitingTime(demand, fuel);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
