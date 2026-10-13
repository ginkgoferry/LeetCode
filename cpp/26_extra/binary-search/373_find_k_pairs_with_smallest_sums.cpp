/*
 * Problem: 373. 查找和最小的 K 对数字 / Find K Pairs with Smallest Sums
 * Link: https://leetcode.cn/problems/find-k-pairs-with-smallest-sums/
 * Chapter: 二分查找
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
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
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
        vector<int> nums1 = {1, 7, 11};
        vector<int> nums2 = {2, 4, 6};
        int k = 3;
        auto localResult = solution.kSmallestPairs(nums1, nums2, k);
        vector<vector<int>> expected = {{1, 2}, {1, 4}, {1, 6}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {1, 1, 2};
        vector<int> nums2 = {1, 2, 3};
        int k = 2;
        auto localResult = solution.kSmallestPairs(nums1, nums2, k);
        vector<vector<int>> expected = {{1, 1}, {1, 1}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
