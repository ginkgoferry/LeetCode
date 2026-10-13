/*
 * Problem: LCP 28. 采购方案 / 采购方案
 * Link: https://leetcode.cn/problems/4xy4Wx/
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
    int purchasePlans(vector<int>& nums, int target) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 5, 3, 5};
        int target = 6;
        auto localResult = solution.purchasePlans(nums, target);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 2, 1, 9};
        int target = 10;
        auto localResult = solution.purchasePlans(nums, target);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> nums = {1, 1};
        int target = 1;
        auto localResult = solution.purchasePlans(nums, target);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
