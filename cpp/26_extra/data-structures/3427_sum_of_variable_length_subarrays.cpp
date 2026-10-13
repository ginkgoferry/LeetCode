/*
 * Problem: 3427. 变长子数组求和 / Sum of Variable Length Subarrays
 * Link: https://leetcode.cn/problems/sum-of-variable-length-subarrays/
 * Chapter: 数据结构
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
    int subarraySum(vector<int>& nums) {
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
        vector<int> nums = {2, 3, 1};
        auto localResult = solution.subarraySum(nums);
        int expected = 11;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 1, 1, 2};
        auto localResult = solution.subarraySum(nums);
        int expected = 13;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
