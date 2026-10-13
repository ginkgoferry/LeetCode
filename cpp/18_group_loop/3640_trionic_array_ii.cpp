/*
 * Problem: 3640. 三段式数组 II / Trionic Array II
 * Link: https://leetcode.cn/problems/trionic-array-ii/
 * Chapter: 分组循环
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
    long long maxSumTrionic(vector<int>& nums) {
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
        vector<int> nums = {0, -2, -1, -3, 0, 2, -1};
        auto localResult = solution.maxSumTrionic(nums);
        long long expected = -4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 4, 2, 7};
        auto localResult = solution.maxSumTrionic(nums);
        long long expected = 14LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
