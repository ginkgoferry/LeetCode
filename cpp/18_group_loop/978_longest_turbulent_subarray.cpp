/*
 * Problem: 978. 最长湍流子数组 / Longest Turbulent Subarray
 * Link: https://leetcode.cn/problems/longest-turbulent-subarray/
 * Chapter: 分组循环
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
    int maxTurbulenceSize(vector<int>& arr) {
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
        vector<int> arr = {9, 4, 2, 10, 7, 8, 8, 1, 9};
        auto localResult = solution.maxTurbulenceSize(arr);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {4, 8, 12, 16};
        auto localResult = solution.maxTurbulenceSize(arr);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {100};
        auto localResult = solution.maxTurbulenceSize(arr);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> arr = {1};
        auto localResult = solution.maxTurbulenceSize(arr);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
