/*
 * Problem: 3897. 连接二进制片段得到的最大值 / Maximum Value of Concatenated Binary Segments
 * Link: https://leetcode.cn/problems/maximum-value-of-concatenated-binary-segments/
 * Chapter: 贪心算法
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
    int maxValue(vector<int>& nums1, vector<int>& nums0) {
        // TODO: 在这里实现你的解法。
        (void)nums1;
        (void)nums0;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums1 = {1, 2};
        vector<int> nums0 = {1, 0};
        auto localResult = solution.maxValue(nums1, nums0);
        int expected = 14;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {3, 1};
        vector<int> nums0 = {0, 3};
        auto localResult = solution.maxValue(nums1, nums0);
        int expected = 120;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
