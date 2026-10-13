/*
 * Problem: 2784. 检查数组是否是好的 / Check if Array is Good
 * Link: https://leetcode.cn/problems/check-if-array-is-good/
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
    bool isGood(vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 1, 3};
        auto localResult = solution.isGood(nums);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 3, 3, 2};
        auto localResult = solution.isGood(nums);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 1};
        auto localResult = solution.isGood(nums);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 4, 4, 1, 2, 1};
        auto localResult = solution.isGood(nums);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
