/*
 * Problem: 128. 最长连续序列 / Longest Consecutive Sequence
 * Link: https://leetcode.cn/problems/longest-consecutive-sequence/
 * Chapter: 哈希
 * Difficulty: Medium
 *
 * Idea:
 * - 先把所有数字放入哈希集合，支持 O(1) 查询某个数是否存在。
 * - 只从没有前驱 x - 1 的数字开始向右扩展，避免重复统计同一段连续序列。
 *
 * Complexity:
 * - Time: O(n)
 * - Space: O(n)
 *
 * Pitfalls:
 * - 
 *
 * Review:
 * - First pass: 2026-07-05
 * - Last attempt: 2026-07-05
 * - Last review:
 * - Next review:
 * - Confidence:
 * - Sessions: 1
 * - Status: DONE
 */

#include <algorithm>
#include <cassert>
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
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int ans = 0;
        for (int left : s) {
            if (s.contains(left - 1)) continue;
            int right = left + 1;
            while (s.contains(right)) right++;
            ans = max(ans, right - left);
        }
        return ans;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {100, 4, 200, 1, 3, 2};
        assert((solution.longestConsecutive(nums) == 4));
    }

    {
        vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
        assert((solution.longestConsecutive(nums) == 9));
    }

    {
        vector<int> nums = {1, 0, 1, 2};
        assert((solution.longestConsecutive(nums) == 3));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
