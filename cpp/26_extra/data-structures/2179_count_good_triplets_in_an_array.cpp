/*
 * Problem: 2179. 统计数组中好三元组数目 / Count Good Triplets in an Array
 * Link: https://leetcode.cn/problems/count-good-triplets-in-an-array/
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
    long long goodTriplets(vector<int>& nums1, vector<int>& nums2) {
        // TODO: 在这里实现你的解法。
        (void)nums1;
        (void)nums2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums1 = {2, 0, 1, 3};
        vector<int> nums2 = {0, 1, 2, 3};
        auto localResult = solution.goodTriplets(nums1, nums2);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {4, 0, 1, 3, 2};
        vector<int> nums2 = {4, 1, 0, 2, 3};
        auto localResult = solution.goodTriplets(nums1, nums2);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
