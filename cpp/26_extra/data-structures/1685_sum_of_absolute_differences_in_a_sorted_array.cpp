/*
 * Problem: 1685. 有序数组中差绝对值之和 / Sum of Absolute Differences in a Sorted Array
 * Link: https://leetcode.cn/problems/sum-of-absolute-differences-in-a-sorted-array/
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
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
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
        vector<int> nums = {2, 3, 5};
        auto localResult = solution.getSumAbsoluteDifferences(nums);
        vector<int> expected = {4, 3, 5};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 4, 6, 8, 10};
        auto localResult = solution.getSumAbsoluteDifferences(nums);
        vector<int> expected = {24, 15, 13, 15, 21};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
