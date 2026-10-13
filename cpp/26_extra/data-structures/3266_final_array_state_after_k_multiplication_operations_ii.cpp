/*
 * Problem: 3266. K 次乘运算后的最终数组 II / Final Array State After K Multiplication Operations II
 * Link: https://leetcode.cn/problems/final-array-state-after-k-multiplication-operations-ii/
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
        vector<int> nums = {100000, 2000};
        int k = 2;
        int multiplier = 1000000;
        auto localResult = solution.getFinalState(nums, k, multiplier);
        vector<int> expected = {999999307, 999999993};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
