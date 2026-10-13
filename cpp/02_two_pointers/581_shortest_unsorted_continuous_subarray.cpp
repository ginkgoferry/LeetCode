/*
 * Problem: 581. 最短无序连续子数组 / Shortest Unsorted Continuous Subarray
 * Link: https://leetcode.cn/problems/shortest-unsorted-continuous-subarray/
 * Chapter: 双指针
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
    int findUnsortedSubarray(vector<int>& nums) {
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
        vector<int> nums = {2, 6, 4, 8, 10, 9, 15};
        auto localResult = solution.findUnsortedSubarray(nums);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4};
        auto localResult = solution.findUnsortedSubarray(nums);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1};
        auto localResult = solution.findUnsortedSubarray(nums);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
