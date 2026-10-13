/*
 * Problem: 368. 最大整除子集 / Largest Divisible Subset
 * Link: https://leetcode.cn/problems/largest-divisible-subset/
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
    vector<int> largestDivisibleSubset(vector<int>& nums) {
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
        vector<int> nums = {1, 2, 3};
        const auto localOriginalNumbers = nums;
        auto localResult = solution.largestDivisibleSubset(nums);
        assert(localResult.size() == 2);
        set<int> seen;
        for (int value : localResult) {
            assert(find(localOriginalNumbers.begin(), localOriginalNumbers.end(), value) != localOriginalNumbers.end());
            assert(seen.insert(value).second);
        }
        for (int a : localResult) for (int b : localResult) assert(a % b == 0 || b % a == 0);
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 4, 8};
        const auto localOriginalNumbers = nums;
        auto localResult = solution.largestDivisibleSubset(nums);
        assert(localResult.size() == 4);
        set<int> seen;
        for (int value : localResult) {
            assert(find(localOriginalNumbers.begin(), localOriginalNumbers.end(), value) != localOriginalNumbers.end());
            assert(seen.insert(value).second);
        }
        for (int a : localResult) for (int b : localResult) assert(a % b == 0 || b % a == 0);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
