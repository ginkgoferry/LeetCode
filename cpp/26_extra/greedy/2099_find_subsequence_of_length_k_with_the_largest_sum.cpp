/*
 * Problem: 2099. 找到和最大的长度为 K 的子序列 / Find Subsequence of Length K With the Largest Sum
 * Link: https://leetcode.cn/problems/find-subsequence-of-length-k-with-the-largest-sum/
 * Chapter: 贪心算法
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
    vector<int> maxSubsequence(vector<int>& nums, int k) {
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
        vector<int> nums = {2, 1, 3, 3};
        int k = 2;
        const auto localOriginalNumbers = nums;
        auto localResult = solution.maxSubsequence(nums, k);
        assert(localResult.size() == static_cast<size_t>(k));
        assert(accumulate(localResult.begin(), localResult.end(), 0LL) == 6LL);
        size_t position = 0;
        for (int value : localOriginalNumbers) if (position < localResult.size() && localResult[position] == value) ++position;
        assert(position == localResult.size());
    }

    {
        // 官方样例
        vector<int> nums = {-1, -2, 3, 4};
        int k = 3;
        const auto localOriginalNumbers = nums;
        auto localResult = solution.maxSubsequence(nums, k);
        assert(localResult.size() == static_cast<size_t>(k));
        assert(accumulate(localResult.begin(), localResult.end(), 0LL) == 6LL);
        size_t position = 0;
        for (int value : localOriginalNumbers) if (position < localResult.size() && localResult[position] == value) ++position;
        assert(position == localResult.size());
    }

    {
        // 官方样例
        vector<int> nums = {3, 4, 3, 3};
        int k = 2;
        const auto localOriginalNumbers = nums;
        auto localResult = solution.maxSubsequence(nums, k);
        assert(localResult.size() == static_cast<size_t>(k));
        assert(accumulate(localResult.begin(), localResult.end(), 0LL) == 7LL);
        size_t position = 0;
        for (int value : localOriginalNumbers) if (position < localResult.size() && localResult[position] == value) ++position;
        assert(position == localResult.size());
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
