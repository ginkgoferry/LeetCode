/*
 * Problem: 3785. 避免禁用值的最小交换次数 / Minimum Swaps to Avoid Forbidden Values
 * Link: https://leetcode.cn/problems/minimum-swaps-to-avoid-forbidden-values/
 * Chapter: 贪心算法
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
    int minSwaps(vector<int>& nums, vector<int>& forbidden) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)forbidden;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, 3};
        vector<int> forbidden = {3, 2, 1};
        auto localResult = solution.minSwaps(nums, forbidden);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 6, 6, 5};
        vector<int> forbidden = {4, 6, 5, 5};
        auto localResult = solution.minSwaps(nums, forbidden);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {7, 7};
        vector<int> forbidden = {8, 7};
        auto localResult = solution.minSwaps(nums, forbidden);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2};
        vector<int> forbidden = {2, 1};
        auto localResult = solution.minSwaps(nums, forbidden);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
