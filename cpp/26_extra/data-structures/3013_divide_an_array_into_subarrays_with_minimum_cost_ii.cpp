/*
 * Problem: 3013. 将数组分成最小总代价的子数组 II / Divide an Array Into Subarrays With Minimum Cost II
 * Link: https://leetcode.cn/problems/divide-an-array-into-subarrays-with-minimum-cost-ii/
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
    long long minimumCost(vector<int>& nums, int k, int dist) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        (void)dist;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 3, 2, 6, 4, 2};
        int k = 3;
        int dist = 3;
        auto localResult = solution.minimumCost(nums, k, dist);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {10, 1, 2, 2, 2, 1};
        int k = 4;
        int dist = 3;
        auto localResult = solution.minimumCost(nums, k, dist);
        long long expected = 15LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {10, 8, 18, 9};
        int k = 3;
        int dist = 1;
        auto localResult = solution.minimumCost(nums, k, dist);
        long long expected = 36LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
