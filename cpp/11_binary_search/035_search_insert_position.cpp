/*
 * Problem: 35. 搜索插入位置 / Search Insert Position
 * Link: https://leetcode.cn/problems/search-insert-position/
 * Chapter: 二分查找
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
    int searchInsert(vector<int>& nums, int target) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {1, 3, 5, 6};
        int target = 5;
        assert((solution.searchInsert(nums, target) == 2));
    }

    {
        vector<int> nums = {1, 3, 5, 6};
        int target = 2;
        assert((solution.searchInsert(nums, target) == 1));
    }

    {
        vector<int> nums = {1, 3, 5, 6};
        int target = 7;
        assert((solution.searchInsert(nums, target) == 4));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
