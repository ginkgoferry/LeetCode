/*
 * Problem: 2563. 统计公平数对的数目 / Count the Number of Fair Pairs
 * Link: https://leetcode.cn/problems/count-the-number-of-fair-pairs/
 * Chapter: 双指针
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
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)lower;
        (void)upper;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {0, 1, 7, 4, 4, 5};
        int lower = 3;
        int upper = 6;
        auto localResult = solution.countFairPairs(nums, lower, upper);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 7, 9, 2, 5};
        int lower = 11;
        int upper = 11;
        auto localResult = solution.countFairPairs(nums, lower, upper);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> nums = {0};
        int lower = 0;
        int upper = 0;
        auto localResult = solution.countFairPairs(nums, lower, upper);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
