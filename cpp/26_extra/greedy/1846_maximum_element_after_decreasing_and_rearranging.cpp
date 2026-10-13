/*
 * Problem: 1846. 减小和重新排列数组后的最大元素 / Maximum Element After Decreasing and Rearranging
 * Link: https://leetcode.cn/problems/maximum-element-after-decreasing-and-rearranging/
 * Chapter: 贪心算法
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
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {2, 2, 1, 2, 1};
        auto localResult = solution.maximumElementAfterDecrementingAndRearranging(arr);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {100, 1, 1000};
        auto localResult = solution.maximumElementAfterDecrementingAndRearranging(arr);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 2, 3, 4, 5};
        auto localResult = solution.maximumElementAfterDecrementingAndRearranging(arr);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
