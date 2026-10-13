/*
 * Problem: 3940. 限制有序数组中的元素出现次数 / Limit Occurrences in Sorted Array
 * Link: https://leetcode.cn/problems/limit-occurrences-in-sorted-array/
 * Chapter: 双指针
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
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 1, 1, 2, 2, 3};
        int k = 2;
        auto localResult = solution.limitOccurrences(nums, k);
        vector<int> expected = {1, 1, 2, 2, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3};
        int k = 1;
        auto localResult = solution.limitOccurrences(nums, k);
        vector<int> expected = {1, 2, 3};
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> nums = {1};
        int k = 1;
        auto localResult = solution.limitOccurrences(nums, k);
        vector<int> expected = {1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
