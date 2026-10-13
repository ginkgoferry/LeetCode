/*
 * Problem: 813. 最大平均值和的分组 / Largest Sum of Averages
 * Link: https://leetcode.cn/problems/largest-sum-of-averages/
 * Chapter: 动态规划
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
    double largestSumOfAverages(vector<int>& nums, int k) {
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
        vector<int> nums = {9, 1, 2, 3, 9};
        int k = 3;
        auto localResult = solution.largestSumOfAverages(nums, k);
        double expected = 20.0;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
        int k = 4;
        auto localResult = solution.largestSumOfAverages(nums, k);
        double expected = 20.5;
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
