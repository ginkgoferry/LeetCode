/*
 * Problem: 2425. 所有数对的异或和 / Bitwise XOR of All Pairings
 * Link: https://leetcode.cn/problems/bitwise-xor-of-all-pairings/
 * Chapter: 位运算
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
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
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
        vector<int> nums1 = {2, 1, 3};
        vector<int> nums2 = {10, 2, 5, 0};
        auto localResult = solution.xorAllNums(nums1, nums2);
        int expected = 13;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {1, 2};
        vector<int> nums2 = {3, 4};
        auto localResult = solution.xorAllNums(nums1, nums2);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
