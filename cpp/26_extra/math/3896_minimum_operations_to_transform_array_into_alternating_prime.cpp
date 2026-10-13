/*
 * Problem: 3896. 将数组转换为交替质数数组的最少操作次数 / Minimum Operations to Transform Array into Alternating Prime
 * Link: https://leetcode.cn/problems/minimum-operations-to-transform-array-into-alternating-prime/
 * Chapter: 数学
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
    int minOperations(vector<int>& nums) {
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
        vector<int> nums = {1, 2, 3, 4};
        auto localResult = solution.minOperations(nums);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 6, 7, 8};
        auto localResult = solution.minOperations(nums);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 4};
        auto localResult = solution.minOperations(nums);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
