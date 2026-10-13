/*
 * Problem: 2948. 交换得到字典序最小的数组 / Make Lexicographically Smallest Array by Swapping Elements
 * Link: https://leetcode.cn/problems/make-lexicographically-smallest-array-by-swapping-elements/
 * Chapter: 分组循环
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
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)limit;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 5, 3, 9, 8};
        int limit = 2;
        auto localResult = solution.lexicographicallySmallestArray(nums, limit);
        vector<int> expected = {1, 3, 5, 8, 9};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 7, 6, 18, 2, 1};
        int limit = 3;
        auto localResult = solution.lexicographicallySmallestArray(nums, limit);
        vector<int> expected = {1, 6, 7, 18, 1, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 7, 28, 19, 10};
        int limit = 3;
        auto localResult = solution.lexicographicallySmallestArray(nums, limit);
        vector<int> expected = {1, 7, 28, 19, 10};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
