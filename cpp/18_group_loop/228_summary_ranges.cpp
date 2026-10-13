/*
 * Problem: 228. 汇总区间 / Summary Ranges
 * Link: https://leetcode.cn/problems/summary-ranges/
 * Chapter: 分组循环
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
    vector<string> summaryRanges(vector<int>& nums) {
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
        vector<int> nums = {0, 1, 2, 4, 5, 7};
        auto localResult = solution.summaryRanges(nums);
        vector<string> expected = {"0->2", "4->5", "7"};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {0, 2, 3, 4, 6, 8, 9};
        auto localResult = solution.summaryRanges(nums);
        vector<string> expected = {"0", "2->4", "6", "8->9"};
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> nums = {};
        auto localResult = solution.summaryRanges(nums);
        vector<string> expected = {};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
