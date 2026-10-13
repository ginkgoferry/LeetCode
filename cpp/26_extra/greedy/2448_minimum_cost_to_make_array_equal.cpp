/*
 * Problem: 2448. 使数组相等的最小开销 / Minimum Cost to Make Array Equal
 * Link: https://leetcode.cn/problems/minimum-cost-to-make-array-equal/
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
    long long minCost(vector<int>& nums, vector<int>& cost) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)cost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 3, 5, 2};
        vector<int> cost = {2, 3, 1, 14};
        auto localResult = solution.minCost(nums, cost);
        long long expected = 8LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 2, 2, 2, 2};
        vector<int> cost = {4, 2, 8, 1, 3};
        auto localResult = solution.minCost(nums, cost);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
