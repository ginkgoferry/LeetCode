/*
 * Problem: 3457. 吃披萨 / Eat Pizzas!
 * Link: https://leetcode.cn/problems/eat-pizzas/
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
    long long maxWeight(vector<int>& pizzas) {
        // TODO: 在这里实现你的解法。
        (void)pizzas;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> pizzas = {1, 2, 3, 4, 5, 6, 7, 8};
        auto localResult = solution.maxWeight(pizzas);
        long long expected = 14LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> pizzas = {2, 1, 1, 1, 1, 1, 1, 1};
        auto localResult = solution.maxWeight(pizzas);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
