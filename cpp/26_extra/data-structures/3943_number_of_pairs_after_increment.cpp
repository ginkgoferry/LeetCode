/*
 * Problem: 3943. 递增后的数对数量 / Number of Pairs After Increment
 * Link: https://leetcode.cn/problems/number-of-pairs-after-increment/
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
    vector<int> numberOfPairs(vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)nums1;
        (void)nums2;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums1 = {1, 2};
        vector<int> nums2 = {3, 4};
        vector<vector<int>> queries = {{2, 5}, {1, 0, 0, 2}, {2, 5}};
        auto localResult = solution.numberOfPairs(nums1, nums2, queries);
        vector<int> expected = {2, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {1, 1};
        vector<int> nums2 = {2, 2, 3};
        vector<vector<int>> queries = {{2, 4}, {1, 0, 1, 1}, {2, 4}};
        auto localResult = solution.numberOfPairs(nums1, nums2, queries);
        vector<int> expected = {2, 6};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {2, 5, 8, 4};
        vector<int> nums2 = {1, 3, 8};
        vector<vector<int>> queries = {{2, 9}, {1, 1, 2, 1}, {2, 10}};
        auto localResult = solution.numberOfPairs(nums1, nums2, queries);
        vector<int> expected = {1, 0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
