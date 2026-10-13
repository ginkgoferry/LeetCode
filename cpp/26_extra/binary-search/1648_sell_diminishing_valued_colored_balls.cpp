/*
 * Problem: 1648. 销售价值减少的颜色球 / Sell Diminishing-Valued Colored Balls
 * Link: https://leetcode.cn/problems/sell-diminishing-valued-colored-balls/
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
    int maxProfit(vector<int>& inventory, int orders) {
        // TODO: 在这里实现你的解法。
        (void)inventory;
        (void)orders;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> inventory = {2, 5};
        int orders = 4;
        auto localResult = solution.maxProfit(inventory, orders);
        int expected = 14;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> inventory = {3, 5};
        int orders = 6;
        auto localResult = solution.maxProfit(inventory, orders);
        int expected = 19;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> inventory = {2, 8, 4, 10, 6};
        int orders = 20;
        auto localResult = solution.maxProfit(inventory, orders);
        int expected = 110;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> inventory = {1000000000};
        int orders = 1000000000;
        auto localResult = solution.maxProfit(inventory, orders);
        int expected = 21;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
