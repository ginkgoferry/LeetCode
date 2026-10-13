/*
 * Problem: 4013. 按奇偶比统计子数组 II / Count Subarrays With Even Odd Ratio II
 * Link: https://leetcode.cn/problems/count-subarrays-with-even-odd-ratio-ii/
 * Chapter: 数据结构
 * Difficulty: Hard
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
    long long countRatioSubarrays(vector<int>& nums, int a, int b) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)a;
        (void)b;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, 1, 2};
        int a = 3;
        int b = 2;
        auto localResult = solution.countRatioSubarrays(nums, a, b);
        long long expected = 7LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 2, 1};
        int a = 2;
        int b = 1;
        auto localResult = solution.countRatioSubarrays(nums, a, b);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 2, 2};
        int a = 1;
        int b = 1;
        auto localResult = solution.countRatioSubarrays(nums, a, b);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
