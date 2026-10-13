/*
 * Problem: 1673. 找出最具竞争力的子序列 / Find the Most Competitive Subsequence
 * Link: https://leetcode.cn/problems/find-the-most-competitive-subsequence/
 * Chapter: 栈
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
    vector<int> mostCompetitive(vector<int>& nums, int k) {
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
        vector<int> nums = {3, 5, 2, 6};
        int k = 2;
        auto localResult = solution.mostCompetitive(nums, k);
        vector<int> expected = {2, 6};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 4, 3, 3, 5, 4, 9, 6};
        int k = 4;
        auto localResult = solution.mostCompetitive(nums, k);
        vector<int> expected = {2, 3, 3, 4};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
