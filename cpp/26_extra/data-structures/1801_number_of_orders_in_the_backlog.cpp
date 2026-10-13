/*
 * Problem: 1801. 积压订单中的订单总数 / Number of Orders in the Backlog
 * Link: https://leetcode.cn/problems/number-of-orders-in-the-backlog/
 * Chapter: 数据结构
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
    int getNumberOfBacklogOrders(vector<vector<int>>& orders) {
        // TODO: 在这里实现你的解法。
        (void)orders;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> orders = {{10, 5, 0}, {15, 2, 1}, {25, 1, 1}, {30, 4, 0}};
        auto localResult = solution.getNumberOfBacklogOrders(orders);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> orders = {{7, 1000000000, 1}, {15, 3, 0}, {5, 999999995, 0}, {5, 1, 1}};
        auto localResult = solution.getNumberOfBacklogOrders(orders);
        int expected = 999999984;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
