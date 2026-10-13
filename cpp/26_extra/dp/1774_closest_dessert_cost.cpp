/*
 * Problem: 1774. 最接近目标价格的甜点成本 / Closest Dessert Cost
 * Link: https://leetcode.cn/problems/closest-dessert-cost/
 * Chapter: 动态规划
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
    int closestCost(vector<int>& baseCosts, vector<int>& toppingCosts, int target) {
        // TODO: 在这里实现你的解法。
        (void)baseCosts;
        (void)toppingCosts;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> baseCosts = {1, 7};
        vector<int> toppingCosts = {3, 4};
        int target = 10;
        auto localResult = solution.closestCost(baseCosts, toppingCosts, target);
        int expected = 10;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> baseCosts = {2, 3};
        vector<int> toppingCosts = {4, 5, 100};
        int target = 18;
        auto localResult = solution.closestCost(baseCosts, toppingCosts, target);
        int expected = 17;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> baseCosts = {3, 10};
        vector<int> toppingCosts = {2, 5};
        int target = 9;
        auto localResult = solution.closestCost(baseCosts, toppingCosts, target);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> baseCosts = {10};
        vector<int> toppingCosts = {1};
        int target = 1;
        auto localResult = solution.closestCost(baseCosts, toppingCosts, target);
        int expected = 10;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
