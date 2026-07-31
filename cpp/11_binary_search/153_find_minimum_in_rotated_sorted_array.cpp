/*
 * Problem: 153. 寻找旋转排序数组中的最小值 / Find Minimum in Rotated Sorted Array
 * Link: https://leetcode.cn/problems/find-minimum-in-rotated-sorted-array/
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
    int findMin(vector<int>& nums) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {3, 4, 5, 1, 2};
        assert((solution.findMin(nums) == 1));
    }

    {
        vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
        assert((solution.findMin(nums) == 0));
    }

    {
        vector<int> nums = {11, 13, 15, 17};
        assert((solution.findMin(nums) == 11));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
