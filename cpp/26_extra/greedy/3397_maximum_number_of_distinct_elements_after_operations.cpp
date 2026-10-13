/*
 * Problem: 3397. 执行操作后不同元素的最大数量 / Maximum Number of Distinct Elements After Operations
 * Link: https://leetcode.cn/problems/maximum-number-of-distinct-elements-after-operations/
 * Chapter: 贪心算法
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
    int maxDistinctElements(vector<int>& nums, int k) {
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
        vector<int> nums = {1, 2, 2, 3, 3, 4};
        int k = 2;
        auto localResult = solution.maxDistinctElements(nums, k);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 4, 4, 4};
        int k = 1;
        auto localResult = solution.maxDistinctElements(nums, k);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
