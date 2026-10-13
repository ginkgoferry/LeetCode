/*
 * Problem: 1475. 商品折扣后的最终价格 / Final Prices With a Special Discount in a Shop
 * Link: https://leetcode.cn/problems/final-prices-with-a-special-discount-in-a-shop/
 * Chapter: 栈
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
    vector<int> finalPrices(vector<int>& prices) {
        // TODO: 在这里实现你的解法。
        (void)prices;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> prices = {8, 4, 6, 2, 3};
        auto localResult = solution.finalPrices(prices);
        vector<int> expected = {4, 2, 4, 2, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> prices = {1, 2, 3, 4, 5};
        auto localResult = solution.finalPrices(prices);
        vector<int> expected = {1, 2, 3, 4, 5};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> prices = {10, 1, 1, 6};
        auto localResult = solution.finalPrices(prices);
        vector<int> expected = {9, 0, 1, 6};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
