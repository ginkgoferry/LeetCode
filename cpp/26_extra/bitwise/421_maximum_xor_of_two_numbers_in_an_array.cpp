/*
 * Problem: 421. 数组中两个数的最大异或值 / Maximum XOR of Two Numbers in an Array
 * Link: https://leetcode.cn/problems/maximum-xor-of-two-numbers-in-an-array/
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
    int findMaximumXOR(vector<int>& nums) {
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
        vector<int> nums = {3, 10, 5, 25, 2, 8};
        auto localResult = solution.findMaximumXOR(nums);
        int expected = 28;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {14, 70, 53, 83, 49, 91, 36, 80, 92, 51, 66, 70};
        auto localResult = solution.findMaximumXOR(nums);
        int expected = 127;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
