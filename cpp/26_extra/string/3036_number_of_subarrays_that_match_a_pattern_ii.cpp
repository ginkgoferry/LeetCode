/*
 * Problem: 3036. 匹配模式数组的子数组数目 II / Number of Subarrays That Match a Pattern II
 * Link: https://leetcode.cn/problems/number-of-subarrays-that-match-a-pattern-ii/
 * Chapter: 字符串
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
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)pattern;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4, 5, 6};
        vector<int> pattern = {1, 1};
        auto localResult = solution.countMatchingSubarrays(nums, pattern);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 4, 4, 1, 3, 5, 5, 3};
        vector<int> pattern = {1, 0, -1};
        auto localResult = solution.countMatchingSubarrays(nums, pattern);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
