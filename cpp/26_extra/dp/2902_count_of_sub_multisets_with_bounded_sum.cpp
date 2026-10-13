/*
 * Problem: 2902. 和带限制的子多重集合的数目 / Count of Sub-Multisets With Bounded Sum
 * Link: https://leetcode.cn/problems/count-of-sub-multisets-with-bounded-sum/
 * Chapter: 动态规划
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
    int countSubMultisets(vector<int>& nums, int l, int r) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)l;
        (void)r;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, 2, 3};
        int l = 6;
        int r = 6;
        auto localResult = solution.countSubMultisets(nums, l, r);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 1, 4, 2, 7};
        int l = 1;
        int r = 5;
        auto localResult = solution.countSubMultisets(nums, l, r);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 1, 3, 5, 2};
        int l = 3;
        int r = 5;
        auto localResult = solution.countSubMultisets(nums, l, r);
        int expected = 9;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
