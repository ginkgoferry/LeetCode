/*
 * Problem: 2334. 元素值大于变化阈值的子数组 / Subarray With Elements Greater Than Varying Threshold
 * Link: https://leetcode.cn/problems/subarray-with-elements-greater-than-varying-threshold/
 * Chapter: 栈
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
    int validSubarraySize(vector<int>& nums, int threshold) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)threshold;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 3, 4, 3, 1};
        int threshold = 6;
        const auto original = nums;
        auto localResult = solution.validSubarraySize(nums, threshold);
        assert(localResult > 0 && static_cast<size_t>(localResult) <= original.size());
        bool found = false;
        for (size_t left = 0; left + localResult <= original.size(); ++left) {
            int minimum = *min_element(original.begin() + left, original.begin() + left + localResult);
            if (static_cast<long long>(minimum) * localResult > threshold) found = true;
        }
        assert(found);
    }

    {
        // 官方样例
        vector<int> nums = {6, 5, 6, 5, 8};
        int threshold = 7;
        const auto original = nums;
        auto localResult = solution.validSubarraySize(nums, threshold);
        assert(localResult > 0 && static_cast<size_t>(localResult) <= original.size());
        bool found = false;
        for (size_t left = 0; left + localResult <= original.size(); ++left) {
            int minimum = *min_element(original.begin() + left, original.begin() + left + localResult);
            if (static_cast<long long>(minimum) * localResult > threshold) found = true;
        }
        assert(found);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
