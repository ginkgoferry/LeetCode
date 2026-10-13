/*
 * Problem: 3854. 使数组奇偶交替的最少操作 / Minimum Operations to Make Array Parity Alternating
 * Link: https://leetcode.cn/problems/minimum-operations-to-make-array-parity-alternating/
 * Chapter: 贪心算法
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
    vector<int> makeParityAlternating(vector<int>& nums) {
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
        vector<int> nums = {-2, -3, 1, 4};
        auto localResult = solution.makeParityAlternating(nums);
        vector<int> expected = {2, 6};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {0, 2, -2};
        auto localResult = solution.makeParityAlternating(nums);
        vector<int> expected = {1, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {7};
        auto localResult = solution.makeParityAlternating(nums);
        vector<int> expected = {0, 0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
