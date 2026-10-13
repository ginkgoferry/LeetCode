/*
 * Problem: 1968. 构造元素不等于两相邻元素平均值的数组 / Array With Elements Not Equal to Average of Neighbors
 * Link: https://leetcode.cn/problems/array-with-elements-not-equal-to-average-of-neighbors/
 * Chapter: 数学
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
    vector<int> rearrangeArray(vector<int>& nums) {
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
        vector<int> nums = {1, 2, 3, 4, 5};
        const auto localOriginalNumbers = nums;
        auto localResult = solution.rearrangeArray(nums);
        auto sortedInput = localOriginalNumbers; auto sortedOutput = localResult;
        sort(sortedInput.begin(), sortedInput.end()); sort(sortedOutput.begin(), sortedOutput.end());
        assert(sortedInput == sortedOutput);
        for (size_t i = 1; i + 1 < localResult.size(); ++i)
            assert(2LL * localResult[i] != static_cast<long long>(localResult[i-1]) + localResult[i+1]);
    }

    {
        // 官方样例
        vector<int> nums = {6, 2, 0, 9, 7};
        const auto localOriginalNumbers = nums;
        auto localResult = solution.rearrangeArray(nums);
        auto sortedInput = localOriginalNumbers; auto sortedOutput = localResult;
        sort(sortedInput.begin(), sortedInput.end()); sort(sortedOutput.begin(), sortedOutput.end());
        assert(sortedInput == sortedOutput);
        for (size_t i = 1; i + 1 < localResult.size(); ++i)
            assert(2LL * localResult[i] != static_cast<long long>(localResult[i-1]) + localResult[i+1]);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
