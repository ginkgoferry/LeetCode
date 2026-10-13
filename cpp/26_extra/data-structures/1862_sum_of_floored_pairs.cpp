/*
 * Problem: 1862. 向下取整数对和 / Sum of Floored Pairs
 * Link: https://leetcode.cn/problems/sum-of-floored-pairs/
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
    int sumOfFlooredPairs(vector<int>& nums) {
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
        vector<int> nums = {2, 5, 9};
        auto localResult = solution.sumOfFlooredPairs(nums);
        int expected = 10;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {7, 7, 7, 7, 7, 7, 7};
        auto localResult = solution.sumOfFlooredPairs(nums);
        int expected = 49;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
