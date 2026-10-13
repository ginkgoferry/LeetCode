/*
 * Problem: 2302. 统计得分小于 K 的子数组数目 / Count Subarrays With Score Less Than K
 * Link: https://leetcode.cn/problems/count-subarrays-with-score-less-than-k/
 * Chapter: 滑动窗口
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
    long long countSubarrays(vector<int>& nums, long long k) {
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
        vector<int> nums = {2, 1, 4, 3, 5};
        long long k = 10LL;
        auto localResult = solution.countSubarrays(nums, k);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 1, 1};
        long long k = 5LL;
        auto localResult = solution.countSubarrays(nums, k);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
