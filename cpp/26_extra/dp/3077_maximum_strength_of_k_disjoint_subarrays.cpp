/*
 * Problem: 3077. K 个不相交子数组的最大能量值 / Maximum Strength of K Disjoint Subarrays
 * Link: https://leetcode.cn/problems/maximum-strength-of-k-disjoint-subarrays/
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
    long long maximumStrength(vector<int>& nums, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, -1, 2};
        int k = 3;
        auto localResult = solution.maximumStrength(nums, k);
        long long expected = 22LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {12, -2, -2, -2, -2};
        int k = 5;
        auto localResult = solution.maximumStrength(nums, k);
        long long expected = 64LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-1, -2, -3};
        int k = 1;
        auto localResult = solution.maximumStrength(nums, k);
        long long expected = -1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
