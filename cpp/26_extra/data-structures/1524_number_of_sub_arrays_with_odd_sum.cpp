/*
 * Problem: 1524. 和为奇数的子数组数目 / Number of Sub-arrays With Odd Sum
 * Link: https://leetcode.cn/problems/number-of-sub-arrays-with-odd-sum/
 * Chapter: 数据结构
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
    int numOfSubarrays(vector<int>& arr) {
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
        vector<int> arr = {1, 3, 5};
        auto localResult = solution.numOfSubarrays(arr);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {2, 4, 6};
        auto localResult = solution.numOfSubarrays(arr);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
        auto localResult = solution.numOfSubarrays(arr);
        int expected = 16;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {100, 100, 99, 99};
        auto localResult = solution.numOfSubarrays(arr);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {7};
        auto localResult = solution.numOfSubarrays(arr);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
