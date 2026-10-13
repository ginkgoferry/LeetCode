/*
 * Problem: 2786. 访问数组中的位置使分数最大 / Visit Array Positions to Maximize Score
 * Link: https://leetcode.cn/problems/visit-array-positions-to-maximize-score/
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
    long long maxScore(vector<int>& nums, int x) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)x;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 3, 6, 1, 9, 2};
        int x = 5;
        auto localResult = solution.maxScore(nums, x);
        long long expected = 13LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 4, 6, 8};
        int x = 3;
        auto localResult = solution.maxScore(nums, x);
        long long expected = 20LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
