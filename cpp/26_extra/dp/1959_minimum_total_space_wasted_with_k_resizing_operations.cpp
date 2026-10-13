/*
 * Problem: 1959. K 次调整数组大小浪费的最小总空间 / Minimum Total Space Wasted With K Resizing Operations
 * Link: https://leetcode.cn/problems/minimum-total-space-wasted-with-k-resizing-operations/
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
    int minSpaceWastedKResizing(vector<int>& nums, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {10, 20};
        int k = 0;
        auto localResult = solution.minSpaceWastedKResizing(nums, k);
        int expected = 10;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {10, 20, 30};
        int k = 1;
        auto localResult = solution.minSpaceWastedKResizing(nums, k);
        int expected = 10;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {10, 20, 15, 30, 20};
        int k = 2;
        auto localResult = solution.minSpaceWastedKResizing(nums, k);
        int expected = 15;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
