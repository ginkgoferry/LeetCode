/*
 * Problem: 3814. 预算下的最大总容量 / Maximum Capacity Within Budget
 * Link: https://leetcode.cn/problems/maximum-capacity-within-budget/
 * Chapter: 双指针
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
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {
        // TODO: 在这里实现你的解法。
        (void)costs;
        (void)capacity;
        (void)budget;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> costs = {4, 8, 5, 3};
        vector<int> capacity = {1, 5, 2, 7};
        int budget = 8;
        auto localResult = solution.maxCapacity(costs, capacity, budget);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> costs = {3, 5, 7, 4};
        vector<int> capacity = {2, 4, 3, 6};
        int budget = 7;
        auto localResult = solution.maxCapacity(costs, capacity, budget);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> costs = {2, 2, 2};
        vector<int> capacity = {3, 5, 4};
        int budget = 5;
        auto localResult = solution.maxCapacity(costs, capacity, budget);
        int expected = 9;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
