/*
 * Problem: 3432. 统计元素和差值为偶数的分区方案 / Count Partitions with Even Sum Difference
 * Link: https://leetcode.cn/problems/count-partitions-with-even-sum-difference/
 * Chapter: 贪心算法
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
    int countPartitions(vector<int>& nums) {
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
        vector<int> nums = {10, 10, 3, 7, 6};
        auto localResult = solution.countPartitions(nums);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 2};
        auto localResult = solution.countPartitions(nums);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 4, 6, 8};
        auto localResult = solution.countPartitions(nums);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
