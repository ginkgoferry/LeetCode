/*
 * Problem: 3779. 得到互不相同元素的最少操作次数 / Minimum Number of Operations to Have Distinct Elements
 * Link: https://leetcode.cn/problems/minimum-number-of-operations-to-have-distinct-elements/
 * Chapter: 贪心算法
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
    int minOperations(vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {3, 8, 3, 6, 5, 8};
        auto localResult = solution.minOperations(nums);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 2};
        auto localResult = solution.minOperations(nums);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 3, 5, 1, 2};
        auto localResult = solution.minOperations(nums);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
