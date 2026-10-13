/*
 * Problem: 1760. 袋子里最少数目的球 / Minimum Limit of Balls in a Bag
 * Link: https://leetcode.cn/problems/minimum-limit-of-balls-in-a-bag/
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
    int minimumSize(vector<int>& nums, int maxOperations) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)maxOperations;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {9};
        int maxOperations = 2;
        auto localResult = solution.minimumSize(nums, maxOperations);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 4, 8, 2};
        int maxOperations = 4;
        auto localResult = solution.minimumSize(nums, maxOperations);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {7, 17};
        int maxOperations = 2;
        auto localResult = solution.minimumSize(nums, maxOperations);
        int expected = 7;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
