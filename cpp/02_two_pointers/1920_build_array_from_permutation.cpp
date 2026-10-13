/*
 * Problem: 1920. 基于排列构建数组 / Build Array from Permutation
 * Link: https://leetcode.cn/problems/build-array-from-permutation/
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
    vector<int> buildArray(vector<int>& nums) {
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
        vector<int> nums = {0, 2, 1, 5, 3, 4};
        auto localResult = solution.buildArray(nums);
        vector<int> expected = {0, 1, 2, 4, 5, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 0, 1, 2, 3, 4};
        auto localResult = solution.buildArray(nums);
        vector<int> expected = {4, 5, 0, 1, 2, 3};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
