/*
 * Problem: 1005. K 次取反后最大化的数组和 / Maximize Sum Of Array After K Negations
 * Link: https://leetcode.cn/problems/maximize-sum-of-array-after-k-negations/
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
    int largestSumAfterKNegations(vector<int>& nums, int k) {
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
        vector<int> nums = {4, 2, 3};
        int k = 1;
        auto localResult = solution.largestSumAfterKNegations(nums, k);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, -1, 0, 2};
        int k = 3;
        auto localResult = solution.largestSumAfterKNegations(nums, k);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, -3, -1, 5, -4};
        int k = 2;
        auto localResult = solution.largestSumAfterKNegations(nums, k);
        int expected = 13;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
