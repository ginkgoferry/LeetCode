/*
 * Problem: 34. 在排序数组中查找元素的第一个和最后一个位置 / Find First and Last Position of Element in Sorted Array
 * Link: https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/
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
    vector<int> searchRange(vector<int>& nums, int target) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {5, 7, 7, 8, 8, 10};
        int target = 8;
        assert((solution.searchRange(nums, target) == vector<int>{3, 4}));
    }

    {
        vector<int> nums = {5, 7, 7, 8, 8, 10};
        int target = 6;
        assert((solution.searchRange(nums, target) == vector<int>{-1, -1}));
    }

    {
        vector<int> nums = {};
        int target = 0;
        assert((solution.searchRange(nums, target) == vector<int>{-1, -1}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
