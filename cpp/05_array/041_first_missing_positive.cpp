/*
 * Problem: 41. 缺失的第一个正数 / First Missing Positive
 * Link: https://leetcode.cn/problems/first-missing-positive/
 * Chapter: 普通数组
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
    int firstMissingPositive(vector<int>& nums) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {1, 2, 0};
        assert((solution.firstMissingPositive(nums) == 3));
    }

    {
        vector<int> nums = {3, 4, -1, 1};
        assert((solution.firstMissingPositive(nums) == 2));
    }

    {
        vector<int> nums = {7, 8, 9, 11, 12};
        assert((solution.firstMissingPositive(nums) == 1));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
