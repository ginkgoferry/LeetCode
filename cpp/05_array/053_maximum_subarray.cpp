/*
 * Problem: 53. 最大子数组和 / Maximum Subarray
 * Link: https://leetcode.cn/problems/maximum-subarray/
 * Chapter: 普通数组
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
    int maxSubArray(vector<int>& nums) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        assert((solution.maxSubArray(nums) == 6));
    }

    {
        vector<int> nums = {1};
        assert((solution.maxSubArray(nums) == 1));
    }

    {
        vector<int> nums = {5, 4, -1, 7, 8};
        assert((solution.maxSubArray(nums) == 23));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
