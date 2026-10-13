/*
 * Problem: 2386. 找出数组的第 K 大和 / Find the K-Sum of an Array
 * Link: https://leetcode.cn/problems/find-the-k-sum-of-an-array/
 * Chapter: 二分查找
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
    long long kSum(vector<int>& nums, int k) {
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
        vector<int> nums = {2, 4, -2};
        int k = 5;
        auto localResult = solution.kSum(nums, k);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, -2, 3, 4, -10, 12};
        int k = 16;
        auto localResult = solution.kSum(nums, k);
        long long expected = 10LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
