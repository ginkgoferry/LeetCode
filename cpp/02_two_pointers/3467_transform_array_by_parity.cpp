/*
 * Problem: 3467. 将数组按照奇偶性转化 / Transform Array by Parity
 * Link: https://leetcode.cn/problems/transform-array-by-parity/
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
    vector<int> transformArray(vector<int>& nums) {
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
        vector<int> nums = {4, 3, 2, 1};
        auto localResult = solution.transformArray(nums);
        vector<int> expected = {0, 0, 1, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 5, 1, 4, 2};
        auto localResult = solution.transformArray(nums);
        vector<int> expected = {0, 0, 1, 1, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
