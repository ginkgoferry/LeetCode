/*
 * Problem: 795. 区间子数组个数 / Number of Subarrays with Bounded Maximum
 * Link: https://leetcode.cn/problems/number-of-subarrays-with-bounded-maximum/
 * Chapter: 双指针
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
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)left;
        (void)right;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 1, 4, 3};
        int left = 2;
        int right = 3;
        auto localResult = solution.numSubarrayBoundedMax(nums, left, right);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 9, 2, 5, 6};
        int left = 2;
        int right = 8;
        auto localResult = solution.numSubarrayBoundedMax(nums, left, right);
        int expected = 7;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
