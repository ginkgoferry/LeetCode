/*
 * Problem: 3811. 交替按位异或分割的数目 / Number of Alternating XOR Partitions
 * Link: https://leetcode.cn/problems/number-of-alternating-xor-partitions/
 * Chapter: 动态规划
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
    int alternatingXOR(vector<int>& nums, int target1, int target2) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)target1;
        (void)target2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 3, 1, 4};
        int target1 = 1;
        int target2 = 5;
        auto localResult = solution.alternatingXOR(nums, target1, target2);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 0, 0};
        int target1 = 1;
        int target2 = 0;
        auto localResult = solution.alternatingXOR(nums, target1, target2);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {7};
        int target1 = 1;
        int target2 = 7;
        auto localResult = solution.alternatingXOR(nums, target1, target2);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
