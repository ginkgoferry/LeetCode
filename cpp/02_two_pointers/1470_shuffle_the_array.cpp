/*
 * Problem: 1470. 重新排列数组 / Shuffle the Array
 * Link: https://leetcode.cn/problems/shuffle-the-array/
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
    vector<int> shuffle(vector<int>& nums, int n) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 5, 1, 3, 4, 7};
        int n = 3;
        auto localResult = solution.shuffle(nums, n);
        vector<int> expected = {2, 3, 5, 4, 1, 7};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4, 4, 3, 2, 1};
        int n = 4;
        auto localResult = solution.shuffle(nums, n);
        vector<int> expected = {1, 4, 2, 3, 3, 2, 4, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 1, 2, 2};
        int n = 2;
        auto localResult = solution.shuffle(nums, n);
        vector<int> expected = {1, 2, 1, 2};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
