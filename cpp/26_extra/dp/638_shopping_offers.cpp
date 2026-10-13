/*
 * Problem: 638. 大礼包 / Shopping Offers
 * Link: https://leetcode.cn/problems/shopping-offers/
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
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        // TODO: 在这里实现你的解法。
        (void)price;
        (void)special;
        (void)needs;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> price = {2, 5};
        vector<vector<int>> special = {{3, 0, 5}, {1, 2, 10}};
        vector<int> needs = {3, 2};
        auto localResult = solution.shoppingOffers(price, special, needs);
        int expected = 14;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> price = {2, 3, 4};
        vector<vector<int>> special = {{1, 1, 0, 4}, {2, 2, 1, 9}};
        vector<int> needs = {1, 2, 1};
        auto localResult = solution.shoppingOffers(price, special, needs);
        int expected = 11;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
