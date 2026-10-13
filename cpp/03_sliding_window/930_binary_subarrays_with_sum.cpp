/*
 * Problem: 930. 和相同的二元子数组 / Binary Subarrays With Sum
 * Link: https://leetcode.cn/problems/binary-subarrays-with-sum/
 * Chapter: 滑动窗口
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
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)goal;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 0, 1, 0, 1};
        int goal = 2;
        auto localResult = solution.numSubarraysWithSum(nums, goal);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {0, 0, 0, 0, 0};
        int goal = 0;
        auto localResult = solution.numSubarraysWithSum(nums, goal);
        int expected = 15;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
