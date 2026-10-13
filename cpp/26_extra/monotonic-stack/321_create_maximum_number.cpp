/*
 * Problem: 321. 拼接最大数 / Create Maximum Number
 * Link: https://leetcode.cn/problems/create-maximum-number/
 * Chapter: 栈
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
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
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
        vector<int> nums1 = {3, 4, 6, 5};
        vector<int> nums2 = {9, 1, 2, 5, 8, 3};
        int k = 5;
        auto localResult = solution.maxNumber(nums1, nums2, k);
        vector<int> expected = {9, 8, 6, 5, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {6, 7};
        vector<int> nums2 = {6, 0, 4};
        int k = 5;
        auto localResult = solution.maxNumber(nums1, nums2, k);
        vector<int> expected = {6, 7, 6, 0, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {3, 9};
        vector<int> nums2 = {8, 9};
        int k = 3;
        auto localResult = solution.maxNumber(nums1, nums2, k);
        vector<int> expected = {9, 8, 9};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
