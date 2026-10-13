/*
 * Problem: 3768. 固定长度子数组中的最小逆序对数目 / Minimum Inversion Count in Subarrays of Fixed Length
 * Link: https://leetcode.cn/problems/minimum-inversion-count-in-subarrays-of-fixed-length/
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
    long long minInversionCount(vector<int>& nums, int k) {
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
        vector<int> nums = {3, 1, 2, 5, 4};
        int k = 3;
        auto localResult = solution.minInversionCount(nums, k);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 3, 2, 1};
        int k = 4;
        auto localResult = solution.minInversionCount(nums, k);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 1};
        int k = 1;
        auto localResult = solution.minInversionCount(nums, k);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
