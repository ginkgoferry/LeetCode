/*
 * Problem: 3739. 统计主要元素子数组数目 II / Count Subarrays With Majority Element II
 * Link: https://leetcode.cn/problems/count-subarrays-with-majority-element-ii/
 * Chapter: 数据结构
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
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, 2, 3};
        int target = 2;
        auto localResult = solution.countMajoritySubarrays(nums, target);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 1, 1, 1};
        int target = 1;
        auto localResult = solution.countMajoritySubarrays(nums, target);
        long long expected = 10LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3};
        int target = 4;
        auto localResult = solution.countMajoritySubarrays(nums, target);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
