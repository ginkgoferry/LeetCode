/*
 * Problem: 3049. 标记所有下标的最早秒数 II / Earliest Second to Mark Indices II
 * Link: https://leetcode.cn/problems/earliest-second-to-mark-indices-ii/
 * Chapter: 数据结构
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
    int earliestSecondToMarkIndices(vector<int>& nums, vector<int>& changeIndices) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)changeIndices;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {3, 2, 3};
        vector<int> changeIndices = {1, 3, 2, 2, 2, 2, 3};
        auto localResult = solution.earliestSecondToMarkIndices(nums, changeIndices);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {0, 0, 1, 2};
        vector<int> changeIndices = {1, 2, 1, 2, 1, 2, 1, 2};
        auto localResult = solution.earliestSecondToMarkIndices(nums, changeIndices);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3};
        vector<int> changeIndices = {1, 2, 3};
        auto localResult = solution.earliestSecondToMarkIndices(nums, changeIndices);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
