/*
 * Problem: 907. 子数组的最小值之和 / Sum of Subarray Minimums
 * Link: https://leetcode.cn/problems/sum-of-subarray-minimums/
 * Chapter: 栈
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
    int sumSubarrayMins(vector<int>& arr) {
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
        vector<int> arr = {3, 1, 2, 4};
        auto localResult = solution.sumSubarrayMins(arr);
        int expected = 17;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {11, 81, 94, 43, 3};
        auto localResult = solution.sumSubarrayMins(arr);
        int expected = 444;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
