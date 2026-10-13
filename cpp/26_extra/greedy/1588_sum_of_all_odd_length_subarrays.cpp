/*
 * Problem: 1588. 所有奇数长度子数组的和 / Sum of All Odd Length Subarrays
 * Link: https://leetcode.cn/problems/sum-of-all-odd-length-subarrays/
 * Chapter: 贪心算法
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
    int sumOddLengthSubarrays(vector<int>& arr) {
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
        vector<int> arr = {1, 4, 2, 5, 3};
        auto localResult = solution.sumOddLengthSubarrays(arr);
        int expected = 58;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 2};
        auto localResult = solution.sumOddLengthSubarrays(arr);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {10, 11, 12};
        auto localResult = solution.sumOddLengthSubarrays(arr);
        int expected = 66;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
