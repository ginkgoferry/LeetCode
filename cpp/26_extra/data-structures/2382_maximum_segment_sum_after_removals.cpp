/*
 * Problem: 2382. 删除操作后的最大子段和 / Maximum Segment Sum After Removals
 * Link: https://leetcode.cn/problems/maximum-segment-sum-after-removals/
 * Chapter: 数据结构
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
    vector<long long> maximumSegmentSum(vector<int>& nums, vector<int>& removeQueries) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)removeQueries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, 5, 6, 1};
        vector<int> removeQueries = {0, 3, 2, 4, 1};
        auto localResult = solution.maximumSegmentSum(nums, removeQueries);
        vector<long long> expected = {14LL, 7LL, 2LL, 2LL, 0LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 2, 11, 1};
        vector<int> removeQueries = {3, 2, 1, 0};
        auto localResult = solution.maximumSegmentSum(nums, removeQueries);
        vector<long long> expected = {16LL, 5LL, 3LL, 0LL};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
