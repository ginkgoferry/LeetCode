/*
 * Problem: 3834. 合并相邻且相等的元素 / Merge Adjacent Equal Elements
 * Link: https://leetcode.cn/problems/merge-adjacent-equal-elements/
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
    vector<long long> mergeAdjacent(vector<int>& nums) {
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
        vector<int> nums = {3, 1, 1, 2};
        auto localResult = solution.mergeAdjacent(nums);
        vector<long long> expected = {3LL, 4LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 2, 4};
        auto localResult = solution.mergeAdjacent(nums);
        vector<long long> expected = {8LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 7, 5};
        auto localResult = solution.mergeAdjacent(nums);
        vector<long long> expected = {3LL, 7LL, 5LL};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
