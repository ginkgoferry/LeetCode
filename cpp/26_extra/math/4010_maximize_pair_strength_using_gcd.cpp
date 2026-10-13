/*
 * Problem: 4010. 数对的最大强度 / Maximize Pair Strength Using GCD
 * Link: https://leetcode.cn/problems/maximize-pair-strength-using-gcd/
 * Chapter: 数学
 * Difficulty: Easy
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
    long long maxPairStrength(vector<int>& nums) {
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
        vector<int> nums = {2, 3, 5};
        auto localResult = solution.maxPairStrength(nums);
        long long expected = 15LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 6, 8};
        auto localResult = solution.maxPairStrength(nums);
        long long expected = 12LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 3};
        auto localResult = solution.maxPairStrength(nums);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
