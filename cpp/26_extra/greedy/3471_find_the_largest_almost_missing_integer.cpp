/*
 * Problem: 3471. 找出最大的几近缺失整数 / Find the Largest Almost Missing Integer
 * Link: https://leetcode.cn/problems/find-the-largest-almost-missing-integer/
 * Chapter: 贪心算法
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
    int largestInteger(vector<int>& nums, int k) {
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
        vector<int> nums = {3, 9, 2, 1, 7};
        int k = 3;
        auto localResult = solution.largestInteger(nums, k);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 9, 7, 2, 1, 7};
        int k = 4;
        auto localResult = solution.largestInteger(nums, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {0, 0};
        int k = 1;
        auto localResult = solution.largestInteger(nums, k);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
