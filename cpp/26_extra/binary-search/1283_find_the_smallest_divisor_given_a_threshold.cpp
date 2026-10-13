/*
 * Problem: 1283. 使结果不超过阈值的最小除数 / Find the Smallest Divisor Given a Threshold
 * Link: https://leetcode.cn/problems/find-the-smallest-divisor-given-a-threshold/
 * Chapter: 二分查找
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
    int smallestDivisor(vector<int>& nums, int threshold) {
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
        vector<int> nums = {1, 2, 5, 9};
        int threshold = 6;
        auto localResult = solution.smallestDivisor(nums, threshold);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 3, 5, 7, 11};
        int threshold = 11;
        auto localResult = solution.smallestDivisor(nums, threshold);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {19};
        int threshold = 5;
        auto localResult = solution.smallestDivisor(nums, threshold);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
