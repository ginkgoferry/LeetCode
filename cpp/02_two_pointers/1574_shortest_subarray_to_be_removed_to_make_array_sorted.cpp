/*
 * Problem: 1574. 删除最短的子数组使剩余数组有序 / Shortest Subarray to be Removed to Make Array Sorted
 * Link: https://leetcode.cn/problems/shortest-subarray-to-be-removed-to-make-array-sorted/
 * Chapter: 双指针
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
    int findLengthOfShortestSubarray(vector<int>& arr) {
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
        vector<int> arr = {1, 2, 3, 10, 4, 2, 3, 5};
        auto localResult = solution.findLengthOfShortestSubarray(arr);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {5, 4, 3, 2, 1};
        auto localResult = solution.findLengthOfShortestSubarray(arr);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 2, 3};
        auto localResult = solution.findLengthOfShortestSubarray(arr);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1};
        auto localResult = solution.findLengthOfShortestSubarray(arr);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
