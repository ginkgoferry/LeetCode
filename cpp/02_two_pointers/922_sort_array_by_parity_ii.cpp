/*
 * Problem: 922. 按奇偶排序数组 II / Sort Array By Parity II
 * Link: https://leetcode.cn/problems/sort-array-by-parity-ii/
 * Chapter: 双指针
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
    vector<int> sortArrayByParityII(vector<int>& nums) {
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
        vector<int> nums = {4, 2, 5, 7};
        const auto original = nums;
        auto localResult = solution.sortArrayByParityII(nums);
        assert(localResult.size() == original.size());
        auto sortedResult = localResult;
        auto sortedOriginal = original;
        sort(sortedResult.begin(), sortedResult.end());
        sort(sortedOriginal.begin(), sortedOriginal.end());
        assert(sortedResult == sortedOriginal);
        for (size_t i = 0; i < localResult.size(); ++i)
            assert(localResult[i] % 2 == static_cast<int>(i % 2));
    }

    {
        // 官方样例
        vector<int> nums = {2, 3};
        const auto original = nums;
        auto localResult = solution.sortArrayByParityII(nums);
        assert(localResult.size() == original.size());
        auto sortedResult = localResult;
        auto sortedOriginal = original;
        sort(sortedResult.begin(), sortedResult.end());
        sort(sortedOriginal.begin(), sortedOriginal.end());
        assert(sortedResult == sortedOriginal);
        for (size_t i = 0; i < localResult.size(); ++i)
            assert(localResult[i] % 2 == static_cast<int>(i % 2));
    }

    {
        // 额外边界用例
        vector<int> nums = {2, 1};
        const auto original = nums;
        auto localResult = solution.sortArrayByParityII(nums);
        assert(localResult.size() == original.size());
        auto sortedResult = localResult;
        auto sortedOriginal = original;
        sort(sortedResult.begin(), sortedResult.end());
        sort(sortedOriginal.begin(), sortedOriginal.end());
        assert(sortedResult == sortedOriginal);
        for (size_t i = 0; i < localResult.size(); ++i)
            assert(localResult[i] % 2 == static_cast<int>(i % 2));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
