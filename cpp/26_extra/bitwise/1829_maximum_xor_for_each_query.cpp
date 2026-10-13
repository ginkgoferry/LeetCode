/*
 * Problem: 1829. 每个查询的最大异或值 / Maximum XOR for Each Query
 * Link: https://leetcode.cn/problems/maximum-xor-for-each-query/
 * Chapter: 位运算
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
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)maximumBit;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {0, 1, 1, 3};
        int maximumBit = 2;
        auto localResult = solution.getMaximumXor(nums, maximumBit);
        vector<int> expected = {0, 3, 2, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 3, 4, 7};
        int maximumBit = 3;
        auto localResult = solution.getMaximumXor(nums, maximumBit);
        vector<int> expected = {5, 2, 6, 5};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {0, 1, 2, 2, 5, 7};
        int maximumBit = 3;
        auto localResult = solution.getMaximumXor(nums, maximumBit);
        vector<int> expected = {4, 3, 6, 4, 6, 7};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
