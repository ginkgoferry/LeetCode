/*
 * Problem: 90. 子集 II / Subsets II
 * Link: https://leetcode.cn/problems/subsets-ii/
 * Chapter: 树与回溯
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
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
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
        vector<int> nums = {1, 2, 2};
        auto localResult = solution.subsetsWithDup(nums);
        vector<vector<int>> expected = {{}, {1}, {1, 2}, {1, 2, 2}, {2}, {2, 2}};
        for (auto& row : localResult) sort(row.begin(), row.end());
        for (auto& row : expected) sort(row.begin(), row.end());
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {0};
        auto localResult = solution.subsetsWithDup(nums);
        vector<vector<int>> expected = {{}, {0}};
        for (auto& row : localResult) sort(row.begin(), row.end());
        for (auto& row : expected) sort(row.begin(), row.end());
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
