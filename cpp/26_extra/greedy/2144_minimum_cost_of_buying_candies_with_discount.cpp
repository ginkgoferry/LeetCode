/*
 * Problem: 2144. 打折购买糖果的最小开销 / Minimum Cost of Buying Candies With Discount
 * Link: https://leetcode.cn/problems/minimum-cost-of-buying-candies-with-discount/
 * Chapter: 贪心算法
 * Difficulty: Easy
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
    int minimumCost(vector<int>& cost) {
        // TODO: 在这里实现你的解法。
        (void)cost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> cost = {1, 2, 3};
        auto localResult = solution.minimumCost(cost);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cost = {6, 5, 7, 9, 2, 2};
        auto localResult = solution.minimumCost(cost);
        int expected = 23;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cost = {5, 5};
        auto localResult = solution.minimumCost(cost);
        int expected = 10;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
