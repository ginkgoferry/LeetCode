/*
 * Problem: 33. 搜索旋转排序数组 / Search in Rotated Sorted Array
 * Link: https://leetcode.cn/problems/search-in-rotated-sorted-array/
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
    int search(vector<int>& nums, int target) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
        int target = 0;
        assert((solution.search(nums, target) == 4));
    }

    {
        vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
        int target = 3;
        assert((solution.search(nums, target) == -1));
    }

    {
        vector<int> nums = {1};
        int target = 0;
        assert((solution.search(nums, target) == -1));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
