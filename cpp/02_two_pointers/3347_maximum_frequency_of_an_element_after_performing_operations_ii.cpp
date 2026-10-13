/*
 * Problem: 3347. 执行操作后元素的最高频率 II / Maximum Frequency of an Element After Performing Operations II
 * Link: https://leetcode.cn/problems/maximum-frequency-of-an-element-after-performing-operations-ii/
 * Chapter: 双指针
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
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        (void)numOperations;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 4, 5};
        int k = 1;
        int numOperations = 2;
        auto localResult = solution.maxFrequency(nums, k, numOperations);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 11, 20, 20};
        int k = 5;
        int numOperations = 1;
        auto localResult = solution.maxFrequency(nums, k, numOperations);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
