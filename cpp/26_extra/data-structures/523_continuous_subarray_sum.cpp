/*
 * Problem: 523. 连续的子数组和 / Continuous Subarray Sum
 * Link: https://leetcode.cn/problems/continuous-subarray-sum/
 * Chapter: 数据结构
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
    bool checkSubarraySum(vector<int>& nums, int k) {
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
        vector<int> nums = {23, 2, 4, 6, 7};
        int k = 6;
        auto localResult = solution.checkSubarraySum(nums, k);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {23, 2, 6, 4, 7};
        int k = 6;
        auto localResult = solution.checkSubarraySum(nums, k);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {23, 2, 6, 4, 7};
        int k = 13;
        auto localResult = solution.checkSubarraySum(nums, k);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
