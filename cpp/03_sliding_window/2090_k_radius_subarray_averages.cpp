/*
 * Problem: 2090. 半径为 k 的子数组平均值 / K Radius Subarray Averages
 * Link: https://leetcode.cn/problems/k-radius-subarray-averages/
 * Chapter: 滑动窗口
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
    vector<int> getAverages(vector<int>& nums, int k) {
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
        vector<int> nums = {7, 4, 3, 9, 1, 8, 5, 2, 6};
        int k = 3;
        auto localResult = solution.getAverages(nums, k);
        vector<int> expected = {-1, -1, -1, 5, 4, 4, -1, -1, -1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {100000};
        int k = 0;
        auto localResult = solution.getAverages(nums, k);
        vector<int> expected = {100000};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {8};
        int k = 100000;
        auto localResult = solution.getAverages(nums, k);
        vector<int> expected = {-1};
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> nums = {1, 2, 3};
        int k = 1;
        auto localResult = solution.getAverages(nums, k);
        vector<int> expected = {-1, 2, -1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
