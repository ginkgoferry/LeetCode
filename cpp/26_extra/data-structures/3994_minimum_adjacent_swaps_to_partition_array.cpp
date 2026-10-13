/*
 * Problem: 3994. 划分数组的最少相邻交换次数 / Minimum Adjacent Swaps to Partition Array
 * Link: https://leetcode.cn/problems/minimum-adjacent-swaps-to-partition-array/
 * Chapter: 数据结构
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
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)a;
        (void)b;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 3, 2, 4, 5, 6};
        int a = 3;
        int b = 4;
        auto localResult = solution.minAdjacentSwaps(nums, a, b);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {9, 7, 5, 3};
        int a = 4;
        int b = 8;
        auto localResult = solution.minAdjacentSwaps(nums, a, b);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 7, 5, 9};
        int a = 4;
        int b = 8;
        auto localResult = solution.minAdjacentSwaps(nums, a, b);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
