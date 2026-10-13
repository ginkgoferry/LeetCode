/*
 * Problem: 2811. 判断是否能拆分数组 / Check if it is Possible to Split Array
 * Link: https://leetcode.cn/problems/check-if-it-is-possible-to-split-array/
 * Chapter: 贪心算法
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
    bool canSplitArray(vector<int>& nums, int m) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)m;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 2, 1};
        int m = 4;
        auto localResult = solution.canSplitArray(nums, m);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 1, 3};
        int m = 5;
        auto localResult = solution.canSplitArray(nums, m);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 3, 3, 2, 3};
        int m = 6;
        auto localResult = solution.canSplitArray(nums, m);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
