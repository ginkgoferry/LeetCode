/*
 * Problem: 3974. K 个元素的最大总和 / Maximum Total Sum of K Selected Elements
 * Link: https://leetcode.cn/problems/maximum-total-sum-of-k-selected-elements/
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
    long long maxSum(vector<int>& nums, int k, int mul) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        (void)mul;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {6, 1, 2, 9};
        int k = 3;
        int mul = 2;
        auto localResult = solution.maxSum(nums, k, mul);
        long long expected = 26LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 7, 5, 2};
        int k = 2;
        int mul = 4;
        auto localResult = solution.maxSum(nums, k, mul);
        long long expected = 43LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 4};
        int k = 1;
        int mul = 1;
        auto localResult = solution.maxSum(nums, k, mul);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
