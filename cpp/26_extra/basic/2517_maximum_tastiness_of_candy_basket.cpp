/*
 * Problem: 2517. 礼盒的最大甜蜜度 / Maximum Tastiness of Candy Basket
 * Link: https://leetcode.cn/problems/maximum-tastiness-of-candy-basket/
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
    int maximumTastiness(vector<int>& price, int k) {
        // TODO: 在这里实现你的解法。
        (void)price;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> price = {13, 5, 1, 8, 21, 2};
        int k = 3;
        auto localResult = solution.maximumTastiness(price, k);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> price = {1, 3, 1};
        int k = 2;
        auto localResult = solution.maximumTastiness(price, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> price = {7, 7, 7, 7};
        int k = 2;
        auto localResult = solution.maximumTastiness(price, k);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
