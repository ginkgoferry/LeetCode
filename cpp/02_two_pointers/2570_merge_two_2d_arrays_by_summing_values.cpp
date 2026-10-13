/*
 * Problem: 2570. 合并两个二维数组 - 求和法 / Merge Two 2D Arrays by Summing Values
 * Link: https://leetcode.cn/problems/merge-two-2d-arrays-by-summing-values/
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
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
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
        vector<vector<int>> nums1 = {{1, 2}, {2, 3}, {4, 5}};
        vector<vector<int>> nums2 = {{1, 4}, {3, 2}, {4, 1}};
        auto localResult = solution.mergeArrays(nums1, nums2);
        vector<vector<int>> expected = {{1, 6}, {2, 3}, {3, 2}, {4, 6}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> nums1 = {{2, 4}, {3, 6}, {5, 5}};
        vector<vector<int>> nums2 = {{1, 3}, {4, 3}};
        auto localResult = solution.mergeArrays(nums1, nums2);
        vector<vector<int>> expected = {{1, 3}, {2, 4}, {3, 6}, {4, 3}, {5, 5}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
