/*
 * Problem: 643. 子数组最大平均数 I / Maximum Average Subarray I
 * Link: https://leetcode.cn/problems/maximum-average-subarray-i/
 * Chapter: 滑动窗口
 * Difficulty: Easy
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
    double findMaxAverage(vector<int>& nums, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        return 0;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 12, -5, -6, 50, 3};
        int k = 4;
        auto localResult = solution.findMaxAverage(nums, k);
        double expected = 12.75;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        vector<int> nums = {5};
        int k = 1;
        auto localResult = solution.findMaxAverage(nums, k);
        double expected = 5.0;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 额外边界用例
        vector<int> nums = {-5, -2};
        int k = 2;
        auto localResult = solution.findMaxAverage(nums, k);
        double expected = -3.5;
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
