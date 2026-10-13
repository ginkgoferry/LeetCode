/*
 * Problem: 1187. 使数组严格递增 / Make Array Strictly Increasing
 * Link: https://leetcode.cn/problems/make-array-strictly-increasing/
 * Chapter: 动态规划
 * Difficulty: Hard
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
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) {
        // TODO: 在这里实现你的解法。
        (void)arr1;
        (void)arr2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr1 = {1, 5, 3, 6, 7};
        vector<int> arr2 = {1, 3, 2, 4};
        auto localResult = solution.makeArrayIncreasing(arr1, arr2);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr1 = {1, 5, 3, 6, 7};
        vector<int> arr2 = {4, 3, 1};
        auto localResult = solution.makeArrayIncreasing(arr1, arr2);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr1 = {1, 5, 3, 6, 7};
        vector<int> arr2 = {1, 6, 3, 3};
        auto localResult = solution.makeArrayIncreasing(arr1, arr2);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
