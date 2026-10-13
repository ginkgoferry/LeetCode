/*
 * Problem: 977. 有序数组的平方 / Squares of a Sorted Array
 * Link: https://leetcode.cn/problems/squares-of-a-sorted-array/
 * Chapter: 双指针
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
    vector<int> sortedSquares(vector<int>& nums) {
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
        vector<int> nums = {-4, -1, 0, 3, 10};
        auto localResult = solution.sortedSquares(nums);
        vector<int> expected = {0, 1, 9, 16, 100};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-7, -3, 2, 3, 11};
        auto localResult = solution.sortedSquares(nums);
        vector<int> expected = {4, 9, 9, 49, 121};
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> nums = {0};
        auto localResult = solution.sortedSquares(nums);
        vector<int> expected = {0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
