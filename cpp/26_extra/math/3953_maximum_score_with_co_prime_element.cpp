/*
 * Problem: 3953. 互质元素的最大得分 / Maximum Score with Co-Prime Element
 * Link: https://leetcode.cn/problems/maximum-score-with-co-prime-element/
 * Chapter: 数学
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
    int maxScore(vector<int>& nums, int maxVal) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)maxVal;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {3, 4, 6};
        int maxVal = 5;
        auto localResult = solution.maxScore(nums, maxVal);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3};
        int maxVal = 4;
        auto localResult = solution.maxScore(nums, maxVal);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 2};
        int maxVal = 1;
        auto localResult = solution.maxScore(nums, maxVal);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
