/*
 * Problem: 2561. 重排水果 / Rearranging Fruits
 * Link: https://leetcode.cn/problems/rearranging-fruits/
 * Chapter: 贪心算法
 * Difficulty: Hard
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
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        // TODO: 在这里实现你的解法。
        (void)basket1;
        (void)basket2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> basket1 = {4, 2, 2, 2};
        vector<int> basket2 = {1, 4, 1, 2};
        auto localResult = solution.minCost(basket1, basket2);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> basket1 = {2, 3, 4, 1};
        vector<int> basket2 = {3, 2, 5, 1};
        auto localResult = solution.minCost(basket1, basket2);
        long long expected = -1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
