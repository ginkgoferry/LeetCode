/*
 * Problem: 3732. 一次替换后的三元素最大乘积 / Maximum Product of Three Elements After One Replacement
 * Link: https://leetcode.cn/problems/maximum-product-of-three-elements-after-one-replacement/
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
    long long maxProduct(vector<int>& nums) {
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
        vector<int> nums = {-5, 7, 0};
        auto localResult = solution.maxProduct(nums);
        long long expected = 3500000LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-4, -2, -1, -3};
        auto localResult = solution.maxProduct(nums);
        long long expected = 1200000LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {0, 10, 0};
        auto localResult = solution.maxProduct(nums);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
