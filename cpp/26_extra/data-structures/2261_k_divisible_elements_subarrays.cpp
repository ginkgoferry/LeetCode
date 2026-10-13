/*
 * Problem: 2261. 含最多 K 个可整除元素的子数组 / K Divisible Elements Subarrays
 * Link: https://leetcode.cn/problems/k-divisible-elements-subarrays/
 * Chapter: 数据结构
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
    int countDistinct(vector<int>& nums, int k, int p) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        (void)p;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 3, 3, 2, 2};
        int k = 2;
        int p = 2;
        auto localResult = solution.countDistinct(nums, k, p);
        int expected = 11;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4};
        int k = 4;
        int p = 1;
        auto localResult = solution.countDistinct(nums, k, p);
        int expected = 10;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
