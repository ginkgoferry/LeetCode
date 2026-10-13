/*
 * Problem: 1658. 将 x 减到 0 的最小操作数 / Minimum Operations to Reduce X to Zero
 * Link: https://leetcode.cn/problems/minimum-operations-to-reduce-x-to-zero/
 * Chapter: 滑动窗口
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
    int minOperations(vector<int>& nums, int x) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)x;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 1, 4, 2, 3};
        int x = 5;
        auto localResult = solution.minOperations(nums, x);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 6, 7, 8, 9};
        int x = 4;
        auto localResult = solution.minOperations(nums, x);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 2, 20, 1, 1, 3};
        int x = 10;
        auto localResult = solution.minOperations(nums, x);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
