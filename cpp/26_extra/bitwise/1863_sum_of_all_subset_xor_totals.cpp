/*
 * Problem: 1863. 找出所有子集的异或总和再求和 / Sum of All Subset XOR Totals
 * Link: https://leetcode.cn/problems/sum-of-all-subset-xor-totals/
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
    int subsetXORSum(vector<int>& nums) {
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
        vector<int> nums = {1, 3};
        auto localResult = solution.subsetXORSum(nums);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 1, 6};
        auto localResult = solution.subsetXORSum(nums);
        int expected = 28;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 4, 5, 6, 7, 8};
        auto localResult = solution.subsetXORSum(nums);
        int expected = 480;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
