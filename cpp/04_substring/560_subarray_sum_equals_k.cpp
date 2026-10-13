/*
 * Problem: 560. 和为 K 的子数组 / Subarray Sum Equals K
 * Link: https://leetcode.cn/problems/subarray-sum-equals-k/
 * Chapter: 子串
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
    int subarraySum(vector<int>& nums, int k) {
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
        vector<int> nums = {1, 1, 1};
        int k = 2;
        assert((solution.subarraySum(nums, k) == 2));
    }

    {
        vector<int> nums = {1, 2, 3};
        int k = 3;
        assert((solution.subarraySum(nums, k) == 2));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
