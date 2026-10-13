/*
 * Problem: 2967. 使数组成为等数数组的最小代价 / Minimum Cost to Make Array Equalindromic
 * Link: https://leetcode.cn/problems/minimum-cost-to-make-array-equalindromic/
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
    long long minimumCost(vector<int>& nums) {
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
        vector<int> nums = {1, 2, 3, 4, 5};
        auto localResult = solution.minimumCost(nums);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {10, 12, 13, 14, 15};
        auto localResult = solution.minimumCost(nums);
        long long expected = 11LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {22, 33, 22, 33, 22};
        auto localResult = solution.minimumCost(nums);
        long long expected = 22LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
