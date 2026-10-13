/*
 * Problem: 905. 按奇偶排序数组 / Sort Array By Parity
 * Link: https://leetcode.cn/problems/sort-array-by-parity/
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
    vector<int> sortArrayByParity(vector<int>& nums) {
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
        vector<int> nums = {3, 1, 2, 4};
        const auto original = nums;
        auto localResult = solution.sortArrayByParity(nums);
        assert(localResult.size() == original.size());
        auto sortedResult = localResult;
        auto sortedOriginal = original;
        sort(sortedResult.begin(), sortedResult.end());
        sort(sortedOriginal.begin(), sortedOriginal.end());
        assert(sortedResult == sortedOriginal);
        bool seenOdd = false;
        for (int value : localResult) {
            if (value % 2 != 0) seenOdd = true;
            else assert(!seenOdd);
        }
    }

    {
        // 官方样例
        vector<int> nums = {0};
        const auto original = nums;
        auto localResult = solution.sortArrayByParity(nums);
        assert(localResult.size() == original.size());
        auto sortedResult = localResult;
        auto sortedOriginal = original;
        sort(sortedResult.begin(), sortedResult.end());
        sort(sortedOriginal.begin(), sortedOriginal.end());
        assert(sortedResult == sortedOriginal);
        bool seenOdd = false;
        for (int value : localResult) {
            if (value % 2 != 0) seenOdd = true;
            else assert(!seenOdd);
        }
    }

    {
        // 额外边界用例
        vector<int> nums = {0};
        const auto original = nums;
        auto localResult = solution.sortArrayByParity(nums);
        assert(localResult.size() == original.size());
        auto sortedResult = localResult;
        auto sortedOriginal = original;
        sort(sortedResult.begin(), sortedResult.end());
        sort(sortedOriginal.begin(), sortedOriginal.end());
        assert(sortedResult == sortedOriginal);
        bool seenOdd = false;
        for (int value : localResult) {
            if (value % 2 != 0) seenOdd = true;
            else assert(!seenOdd);
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
