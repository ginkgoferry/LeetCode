/*
 * Problem: 3684. 至多 K 个不同元素的最大和 / Maximize Sum of At Most K Distinct Elements
 * Link: https://leetcode.cn/problems/maximize-sum-of-at-most-k-distinct-elements/
 * Chapter: 双指针
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
    vector<int> maxKDistinct(vector<int>& nums, int k) {
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
        vector<int> nums = {84, 93, 100, 77, 90};
        int k = 3;
        auto localResult = solution.maxKDistinct(nums, k);
        vector<int> expected = {100, 93, 90};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {84, 93, 100, 77, 93};
        int k = 3;
        auto localResult = solution.maxKDistinct(nums, k);
        vector<int> expected = {100, 93, 84};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 1, 1, 2, 2, 2};
        int k = 6;
        auto localResult = solution.maxKDistinct(nums, k);
        vector<int> expected = {2, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
