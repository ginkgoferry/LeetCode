/*
 * Problem: 1793. 好子数组的最大分数 / Maximum Score of a Good Subarray
 * Link: https://leetcode.cn/problems/maximum-score-of-a-good-subarray/
 * Chapter: 双指针
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
    int maximumScore(vector<int>& nums, int k) {
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
        vector<int> nums = {1, 4, 3, 7, 4, 5};
        int k = 3;
        auto localResult = solution.maximumScore(nums, k);
        int expected = 15;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 5, 4, 5, 4, 1, 1, 1};
        int k = 0;
        auto localResult = solution.maximumScore(nums, k);
        int expected = 20;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
