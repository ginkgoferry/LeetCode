/*
 * Problem: 2845. 统计趣味子数组的数目 / Count of Interesting Subarrays
 * Link: https://leetcode.cn/problems/count-of-interesting-subarrays/
 * Chapter: 数据结构
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
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)modulo;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {3, 2, 4};
        int modulo = 2;
        int k = 1;
        auto localResult = solution.countInterestingSubarrays(nums, modulo, k);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 1, 9, 6};
        int modulo = 3;
        int k = 0;
        auto localResult = solution.countInterestingSubarrays(nums, modulo, k);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
