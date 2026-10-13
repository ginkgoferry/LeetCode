/*
 * Problem: 496. 下一个更大元素 I / Next Greater Element I
 * Link: https://leetcode.cn/problems/next-greater-element-i/
 * Chapter: 栈
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
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
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
        vector<int> nums1 = {4, 1, 2};
        vector<int> nums2 = {1, 3, 4, 2};
        auto localResult = solution.nextGreaterElement(nums1, nums2);
        vector<int> expected = {-1, 3, -1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {2, 4};
        vector<int> nums2 = {1, 2, 3, 4};
        auto localResult = solution.nextGreaterElement(nums1, nums2);
        vector<int> expected = {3, -1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
