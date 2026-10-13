/*
 * Problem: 209. 长度最小的子数组 / Minimum Size Subarray Sum
 * Link: https://leetcode.cn/problems/minimum-size-subarray-sum/
 * Chapter: 滑动窗口
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
    int minSubArrayLen(int target, vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)target;
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int target = 7;
        vector<int> nums = {2, 3, 1, 2, 4, 3};
        auto localResult = solution.minSubArrayLen(target, nums);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int target = 4;
        vector<int> nums = {1, 4, 4};
        auto localResult = solution.minSubArrayLen(target, nums);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int target = 11;
        vector<int> nums = {1, 1, 1, 1, 1, 1, 1, 1};
        auto localResult = solution.minSubArrayLen(target, nums);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
