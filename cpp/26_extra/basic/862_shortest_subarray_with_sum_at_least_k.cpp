/*
 * Problem: 862. 和至少为 K 的最短子数组 / Shortest Subarray with Sum at Least K
 * Link: https://leetcode.cn/problems/shortest-subarray-with-sum-at-least-k/
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
    int shortestSubarray(vector<int>& nums, int k) {
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
        vector<int> nums = {1};
        int k = 1;
        auto localResult = solution.shortestSubarray(nums, k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2};
        int k = 4;
        auto localResult = solution.shortestSubarray(nums, k);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, -1, 2};
        int k = 3;
        auto localResult = solution.shortestSubarray(nums, k);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
