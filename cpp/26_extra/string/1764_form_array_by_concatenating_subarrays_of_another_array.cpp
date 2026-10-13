/*
 * Problem: 1764. 通过连接另一个数组的子数组得到一个数组 / Form Array by Concatenating Subarrays of Another Array
 * Link: https://leetcode.cn/problems/form-array-by-concatenating-subarrays-of-another-array/
 * Chapter: 字符串
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
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)groups;
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> groups = {{1, -1, -1}, {3, -2, 0}};
        vector<int> nums = {1, -1, 0, 1, -1, -1, 3, -2, 0};
        auto localResult = solution.canChoose(groups, nums);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> groups = {{10, -2}, {1, 2, 3, 4}};
        vector<int> nums = {1, 2, 3, 4, 10, -2};
        auto localResult = solution.canChoose(groups, nums);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> groups = {{1, 2, 3}, {3, 4}};
        vector<int> nums = {7, 7, 1, 2, 3, 4, 7, 7};
        auto localResult = solution.canChoose(groups, nums);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
