/*
 * Problem: 3912. 数组中的有效元素 / Valid Elements in an Array
 * Link: https://leetcode.cn/problems/valid-elements-in-an-array/
 * Chapter: 动态规划
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
    vector<int> findValidElements(vector<int>& nums) {
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
        vector<int> nums = {1, 2, 4, 2, 3, 2};
        auto localResult = solution.findValidElements(nums);
        vector<int> expected = {1, 2, 4, 3, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 5, 5, 5};
        auto localResult = solution.findValidElements(nums);
        vector<int> expected = {5, 5};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1};
        auto localResult = solution.findValidElements(nums);
        vector<int> expected = {1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
