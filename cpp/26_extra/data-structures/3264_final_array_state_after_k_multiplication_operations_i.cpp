/*
 * Problem: 3264. K 次乘运算后的最终数组 I / Final Array State After K Multiplication Operations I
 * Link: https://leetcode.cn/problems/final-array-state-after-k-multiplication-operations-i/
 * Chapter: 数据结构
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
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        (void)multiplier;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 1, 3, 5, 6};
        int k = 5;
        int multiplier = 2;
        auto localResult = solution.getFinalState(nums, k, multiplier);
        vector<int> expected = {8, 4, 6, 5, 6};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2};
        int k = 3;
        int multiplier = 4;
        auto localResult = solution.getFinalState(nums, k, multiplier);
        vector<int> expected = {16, 8};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
