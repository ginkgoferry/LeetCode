/*
 * Problem: 632. 最小区间 / Smallest Range Covering Elements from K Lists
 * Link: https://leetcode.cn/problems/smallest-range-covering-elements-from-k-lists/
 * Chapter: 滑动窗口
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
    vector<int> smallestRange(vector<vector<int>>& nums) {
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
        vector<vector<int>> nums = {{4, 10, 15, 24, 26}, {0, 9, 12, 20}, {5, 18, 22, 30}};
        auto localResult = solution.smallestRange(nums);
        vector<int> expected = {20, 24};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> nums = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
        auto localResult = solution.smallestRange(nums);
        vector<int> expected = {1, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
