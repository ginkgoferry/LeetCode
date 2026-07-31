/*
 * Problem: 215. 数组中的第K个最大元素 / Kth Largest Element in an Array
 * Link: https://leetcode.cn/problems/kth-largest-element-in-an-array/
 * Chapter: 堆
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
    int findKthLargest(vector<int>& nums, int k) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {3, 2, 1, 5, 6, 4};
        int k = 2;
        assert((solution.findKthLargest(nums, k) == 5));
    }

    {
        vector<int> nums = {3, 2, 3, 1, 2, 4, 5, 5, 6};
        int k = 4;
        assert((solution.findKthLargest(nums, k) == 4));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
