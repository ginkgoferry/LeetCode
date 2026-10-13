/*
 * Problem: 3524. 求出数组的 X 值 I / Find X Value of Array I
 * Link: https://leetcode.cn/problems/find-x-value-of-array-i/
 * Chapter: 动态规划
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
    vector<long long> resultArray(vector<int>& nums, int k) {
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
        vector<int> nums = {1, 2, 3, 4, 5};
        int k = 3;
        auto localResult = solution.resultArray(nums, k);
        vector<long long> expected = {9LL, 2LL, 4LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 4, 8, 16, 32};
        int k = 4;
        auto localResult = solution.resultArray(nums, k);
        vector<long long> expected = {18LL, 1LL, 2LL, 0LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 1, 2, 1, 1};
        int k = 2;
        auto localResult = solution.resultArray(nums, k);
        vector<long long> expected = {9LL, 6LL};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
