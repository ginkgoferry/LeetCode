/*
 * Problem: 3859. 统计包含 K 个不同整数的子数组 / Count Subarrays With K Distinct Integers
 * Link: https://leetcode.cn/problems/count-subarrays-with-k-distinct-integers/
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
    long long countSubarrays(vector<int>& nums, int k, int m) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        (void)m;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, 1, 2, 2};
        int k = 2;
        int m = 2;
        auto localResult = solution.countSubarrays(nums, k, m);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 1, 2, 4};
        int k = 2;
        int m = 1;
        auto localResult = solution.countSubarrays(nums, k, m);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
