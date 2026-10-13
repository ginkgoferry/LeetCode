/*
 * Problem: 3781. 二进制交换后的最大分数 / Maximum Score After Binary Swaps
 * Link: https://leetcode.cn/problems/maximum-score-after-binary-swaps/
 * Chapter: 数据结构
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
    long long maximumScore(vector<int>& nums, string s) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 1, 5, 2, 3};
        string s = "01010";
        auto localResult = solution.maximumScore(nums, s);
        long long expected = 7LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 7, 2, 9};
        string s = "0000";
        auto localResult = solution.maximumScore(nums, s);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
