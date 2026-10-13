/*
 * Problem: 2200. 找出数组中的所有 K 近邻下标 / Find All K-Distant Indices in an Array
 * Link: https://leetcode.cn/problems/find-all-k-distant-indices-in-an-array/
 * Chapter: 滑动窗口
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
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)key;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {3, 4, 9, 1, 3, 9, 5};
        int key = 9;
        int k = 1;
        auto localResult = solution.findKDistantIndices(nums, key, k);
        vector<int> expected = {1, 2, 3, 4, 5, 6};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 2, 2, 2, 2};
        int key = 2;
        int k = 2;
        auto localResult = solution.findKDistantIndices(nums, key, k);
        vector<int> expected = {0, 1, 2, 3, 4};
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> nums = {1};
        int key = 1;
        int k = 0;
        auto localResult = solution.findKDistantIndices(nums, key, k);
        vector<int> expected = {0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
