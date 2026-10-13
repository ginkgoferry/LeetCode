/*
 * Problem: 3478. 选出和最大的 K 个元素 / Choose K Elements With Maximum Sum
 * Link: https://leetcode.cn/problems/choose-k-elements-with-maximum-sum/
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
    vector<long long> findMaxSum(vector<int>& nums1, vector<int>& nums2, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums1;
        (void)nums2;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums1 = {4, 2, 1, 5, 3};
        vector<int> nums2 = {10, 20, 30, 40, 50};
        int k = 2;
        auto localResult = solution.findMaxSum(nums1, nums2, k);
        vector<long long> expected = {80LL, 30LL, 0LL, 80LL, 50LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {2, 2, 2, 2};
        vector<int> nums2 = {3, 1, 2, 3};
        int k = 1;
        auto localResult = solution.findMaxSum(nums1, nums2, k);
        vector<long long> expected = {0LL, 0LL, 0LL, 0LL};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
