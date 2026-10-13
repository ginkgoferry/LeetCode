/*
 * Problem: 4014. 应用折扣后的最低总价 / Minimum Total Price After Applying Discounts
 * Link: https://leetcode.cn/problems/minimum-total-price-after-applying-discounts/
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
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        // TODO: 在这里实现你的解法。
        (void)prices;
        (void)discounts;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> prices = {10, 30, 21};
        vector<int> discounts = {50, 60};
        auto localResult = solution.minPrice(prices, discounts);
        double expected = 32.5;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        vector<int> prices = {100, 70};
        vector<int> discounts = {10, 40, 50};
        auto localResult = solution.minPrice(prices, discounts);
        double expected = 92.0;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        vector<int> prices = {7, 3, 9};
        vector<int> discounts = {100, 100};
        auto localResult = solution.minPrice(prices, discounts);
        double expected = 3.0;
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
