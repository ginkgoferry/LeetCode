/*
 * Problem: 852. 山脉数组的峰顶索引 / Peak Index in a Mountain Array
 * Link: https://leetcode.cn/problems/peak-index-in-a-mountain-array/
 * Chapter: 二分查找
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
    int peakIndexInMountainArray(vector<int>& arr) {
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
        vector<int> arr = {0, 1, 0};
        auto localResult = solution.peakIndexInMountainArray(arr);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {0, 2, 1, 0};
        auto localResult = solution.peakIndexInMountainArray(arr);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {0, 10, 5, 2};
        auto localResult = solution.peakIndexInMountainArray(arr);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
