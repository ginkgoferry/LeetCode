/*
 * Problem: 3845. 最大子数组异或值 / Maximum Subarray XOR with Bounded Range
 * Link: https://leetcode.cn/problems/maximum-subarray-xor-with-bounded-range/
 * Chapter: 位运算
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
    int maxXor(vector<int>& nums, int k) {
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
        vector<int> nums = {5, 4, 5, 6};
        int k = 2;
        auto localResult = solution.maxXor(nums, k);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 4, 5, 6};
        int k = 1;
        auto localResult = solution.maxXor(nums, k);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
