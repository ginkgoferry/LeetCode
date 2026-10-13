/*
 * Problem: 3255. 长度为 K 的子数组的能量值 II / Find the Power of K-Size Subarrays II
 * Link: https://leetcode.cn/problems/find-the-power-of-k-size-subarrays-ii/
 * Chapter: 分组循环
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
    vector<int> resultsArray(vector<int>& nums, int k) {
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
        vector<int> nums = {1, 2, 3, 4, 3, 2, 5};
        int k = 3;
        auto localResult = solution.resultsArray(nums, k);
        vector<int> expected = {3, 4, -1, -1, -1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 2, 2, 2, 2};
        int k = 4;
        auto localResult = solution.resultsArray(nums, k);
        vector<int> expected = {-1, -1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 2, 3, 2, 3, 2};
        int k = 2;
        auto localResult = solution.resultsArray(nums, k);
        vector<int> expected = {-1, 3, -1, 3, -1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
