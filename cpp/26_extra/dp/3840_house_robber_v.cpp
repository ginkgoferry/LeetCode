/*
 * Problem: 3840. 打家劫舍 V / House Robber V
 * Link: https://leetcode.cn/problems/house-robber-v/
 * Chapter: 动态规划
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
    long long rob(vector<int>& nums, vector<int>& colors) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)colors;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 4, 3, 5};
        vector<int> colors = {1, 1, 2, 2};
        auto localResult = solution.rob(nums, colors);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 1, 2, 4};
        vector<int> colors = {2, 3, 2, 2};
        auto localResult = solution.rob(nums, colors);
        long long expected = 8LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {10, 1, 3, 9};
        vector<int> colors = {1, 1, 1, 2};
        auto localResult = solution.rob(nums, colors);
        long long expected = 22LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
