/*
 * Problem: 2218. 从栈中取出 K 个硬币的最大面值和 / Maximum Value of K Coins From Piles
 * Link: https://leetcode.cn/problems/maximum-value-of-k-coins-from-piles/
 * Chapter: 动态规划
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
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        // TODO: 在这里实现你的解法。
        (void)piles;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> piles = {{1, 100, 3}, {7, 8, 9}};
        int k = 2;
        auto localResult = solution.maxValueOfCoins(piles, k);
        int expected = 101;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> piles = {{100}, {100}, {100}, {100}, {100}, {100}, {1, 1, 1, 1, 1, 1, 700}};
        int k = 7;
        auto localResult = solution.maxValueOfCoins(piles, k);
        int expected = 706;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
