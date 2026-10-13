/*
 * Problem: 1262. 可被三整除的最大和 / Greatest Sum Divisible by Three
 * Link: https://leetcode.cn/problems/greatest-sum-divisible-by-three/
 * Chapter: 动态规划
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
    int maxSumDivThree(vector<int>& nums) {
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
        vector<int> nums = {3, 6, 5, 1, 8};
        auto localResult = solution.maxSumDivThree(nums);
        int expected = 18;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4};
        auto localResult = solution.maxSumDivThree(nums);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4, 4};
        auto localResult = solution.maxSumDivThree(nums);
        int expected = 12;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
