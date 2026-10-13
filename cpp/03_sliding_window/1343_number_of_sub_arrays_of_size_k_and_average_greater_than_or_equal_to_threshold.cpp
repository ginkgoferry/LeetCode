/*
 * Problem: 1343. 大小为 K 且平均值大于等于阈值的子数组数目 / Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
 * Link: https://leetcode.cn/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/
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
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        (void)k;
        (void)threshold;
        return 0;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {2, 2, 2, 2, 5, 5, 5, 8};
        int k = 3;
        int threshold = 4;
        auto localResult = solution.numOfSubarrays(arr, k, threshold);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {11, 13, 17, 23, 29, 31, 7, 5, 2, 3};
        int k = 3;
        int threshold = 5;
        auto localResult = solution.numOfSubarrays(arr, k, threshold);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> arr = {4};
        int k = 1;
        int threshold = 4;
        auto localResult = solution.numOfSubarrays(arr, k, threshold);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
