/*
 * Problem: 3947. 购买最多物品数目 II / Maximum Number of Items From Sale II
 * Link: https://leetcode.cn/problems/maximum-number-of-items-from-sale-ii/
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
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        // TODO: 在这里实现你的解法。
        (void)items;
        (void)budget;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> items = {{1, 6}, {2, 4}, {3, 5}};
        int budget = 19;
        auto localResult = solution.maximumSaleItems(items, budget);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> items = {{2, 8}, {1, 10}, {6, 6}, {4, 12}, {5, 20}, {5, 17}};
        int budget = 35;
        auto localResult = solution.maximumSaleItems(items, budget);
        int expected = 7;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
