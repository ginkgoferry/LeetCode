/*
 * Problem: 2540. 最小公共值 / Minimum Common Value
 * Link: https://leetcode.cn/problems/minimum-common-value/
 * Chapter: 双指针
 * Difficulty: Easy
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
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
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
        vector<int> nums1 = {1, 2, 3};
        vector<int> nums2 = {2, 4};
        auto localResult = solution.getCommon(nums1, nums2);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {1, 2, 3, 6};
        vector<int> nums2 = {2, 3, 4, 5};
        auto localResult = solution.getCommon(nums1, nums2);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> nums1 = {1};
        vector<int> nums2 = {2};
        auto localResult = solution.getCommon(nums1, nums2);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
