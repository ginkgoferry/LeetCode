/*
 * Problem: 2344. 使数组可以被整除的最少删除次数 / Minimum Deletions to Make Array Divisible
 * Link: https://leetcode.cn/problems/minimum-deletions-to-make-array-divisible/
 * Chapter: 数学
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
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)numsDivide;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 3, 2, 4, 3};
        vector<int> numsDivide = {9, 6, 9, 3, 15};
        auto localResult = solution.minOperations(nums, numsDivide);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 3, 6};
        vector<int> numsDivide = {8, 2, 6, 10};
        auto localResult = solution.minOperations(nums, numsDivide);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
