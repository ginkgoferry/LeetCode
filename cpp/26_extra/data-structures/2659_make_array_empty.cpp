/*
 * Problem: 2659. 将数组清空 / Make Array Empty
 * Link: https://leetcode.cn/problems/make-array-empty/
 * Chapter: 数据结构
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
    long long countOperationsToEmptyArray(vector<int>& nums) {
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
        vector<int> nums = {3, 4, -1};
        auto localResult = solution.countOperationsToEmptyArray(nums);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 4, 3};
        auto localResult = solution.countOperationsToEmptyArray(nums);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3};
        auto localResult = solution.countOperationsToEmptyArray(nums);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
