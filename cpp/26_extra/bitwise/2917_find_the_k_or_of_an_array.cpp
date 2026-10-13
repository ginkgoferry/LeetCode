/*
 * Problem: 2917. 找出数组中的 K-or 值 / Find the K-or of an Array
 * Link: https://leetcode.cn/problems/find-the-k-or-of-an-array/
 * Chapter: 位运算
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
    int findKOr(vector<int>& nums, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {7, 12, 9, 8, 9, 15};
        int k = 4;
        auto localResult = solution.findKOr(nums, k);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 12, 1, 11, 4, 5};
        int k = 6;
        auto localResult = solution.findKOr(nums, k);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {10, 8, 5, 9, 11, 6, 8};
        int k = 1;
        auto localResult = solution.findKOr(nums, k);
        int expected = 15;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
