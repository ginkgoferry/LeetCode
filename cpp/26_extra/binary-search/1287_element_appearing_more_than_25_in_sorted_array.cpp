/*
 * Problem: 1287. 有序数组中出现次数超过25%的元素 / Element Appearing More Than 25% In Sorted Array
 * Link: https://leetcode.cn/problems/element-appearing-more-than-25-in-sorted-array/
 * Chapter: 二分查找
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
    int findSpecialInteger(vector<int>& arr) {
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
        vector<int> arr = {1, 2, 2, 6, 6, 6, 6, 7, 10};
        auto localResult = solution.findSpecialInteger(arr);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
