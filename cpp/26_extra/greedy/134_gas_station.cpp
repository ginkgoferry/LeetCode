/*
 * Problem: 134. 加油站 / Gas Station
 * Link: https://leetcode.cn/problems/gas-station/
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
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // TODO: 在这里实现你的解法。
        (void)gas;
        (void)cost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> gas = {1, 2, 3, 4, 5};
        vector<int> cost = {3, 4, 5, 1, 2};
        auto localResult = solution.canCompleteCircuit(gas, cost);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> gas = {2, 3, 4};
        vector<int> cost = {3, 4, 3};
        auto localResult = solution.canCompleteCircuit(gas, cost);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
