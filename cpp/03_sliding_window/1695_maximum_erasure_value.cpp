/*
 * Problem: 1695. 删除子数组的最大得分 / Maximum Erasure Value
 * Link: https://leetcode.cn/problems/maximum-erasure-value/
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
    int maximumUniqueSubarray(vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {4, 2, 4, 5, 6};
        auto localResult = solution.maximumUniqueSubarray(nums);
        int expected = 17;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 2, 1, 2, 5, 2, 1, 2, 5};
        auto localResult = solution.maximumUniqueSubarray(nums);
        int expected = 8;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
