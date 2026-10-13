/*
 * Problem: 面试题 16.24. 数对和 / Pairs With Sum LCCI
 * Link: https://leetcode.cn/problems/pairs-with-sum-lcci/
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
    vector<vector<int>> pairSums(vector<int>& nums, int target) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {5, 6, 5};
        int target = 11;
        auto localResult = solution.pairSums(nums, target);
        vector<vector<int>> expected = {{5, 6}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 6, 5, 6};
        int target = 11;
        auto localResult = solution.pairSums(nums, target);
        vector<vector<int>> expected = {{5, 6}, {5, 6}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
