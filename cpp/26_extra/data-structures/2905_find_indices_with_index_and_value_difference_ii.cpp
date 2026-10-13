/*
 * Problem: 2905. 找出满足差值条件的下标 II / Find Indices With Index and Value Difference II
 * Link: https://leetcode.cn/problems/find-indices-with-index-and-value-difference-ii/
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
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)indexDifference;
        (void)valueDifference;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {5, 1, 4, 1};
        int indexDifference = 2;
        int valueDifference = 4;
        const auto localOriginalNumbers = nums;
        auto localResult = solution.findIndices(nums, indexDifference, valueDifference);
        assert(localResult.size() == 2);
        int i = localResult[0], j = localResult[1];
        assert(i >= 0 && j >= 0 && static_cast<size_t>(i) < localOriginalNumbers.size() && static_cast<size_t>(j) < localOriginalNumbers.size());
        assert(abs(i - j) >= indexDifference);
        assert(abs(static_cast<long long>(localOriginalNumbers[i]) - localOriginalNumbers[j]) >= valueDifference);
    }

    {
        // 官方样例
        vector<int> nums = {2, 1};
        int indexDifference = 0;
        int valueDifference = 0;
        const auto localOriginalNumbers = nums;
        auto localResult = solution.findIndices(nums, indexDifference, valueDifference);
        assert(localResult.size() == 2);
        int i = localResult[0], j = localResult[1];
        assert(i >= 0 && j >= 0 && static_cast<size_t>(i) < localOriginalNumbers.size() && static_cast<size_t>(j) < localOriginalNumbers.size());
        assert(abs(i - j) >= indexDifference);
        assert(abs(static_cast<long long>(localOriginalNumbers[i]) - localOriginalNumbers[j]) >= valueDifference);
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3};
        int indexDifference = 2;
        int valueDifference = 4;
        const auto localOriginalNumbers = nums;
        auto localResult = solution.findIndices(nums, indexDifference, valueDifference);
        assert((localResult == vector<int>{-1, -1}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
