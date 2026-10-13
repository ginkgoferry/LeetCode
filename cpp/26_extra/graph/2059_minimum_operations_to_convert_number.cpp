/*
 * Problem: 2059. 转化数字的最小运算数 / Minimum Operations to Convert Number
 * Link: https://leetcode.cn/problems/minimum-operations-to-convert-number/
 * Chapter: 图论
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
    int minimumOperations(vector<int>& nums, int start, int goal) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)start;
        (void)goal;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 4, 12};
        int start = 2;
        int goal = 12;
        auto localResult = solution.minimumOperations(nums, start, goal);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 5, 7};
        int start = 0;
        int goal = -4;
        auto localResult = solution.minimumOperations(nums, start, goal);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 8, 16};
        int start = 0;
        int goal = 1;
        auto localResult = solution.minimumOperations(nums, start, goal);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
