/*
 * Problem: 136. 只出现一次的数字 / Single Number
 * Link: https://leetcode.cn/problems/single-number/
 * Chapter: 技巧
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
    int singleNumber(vector<int>& nums) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {2, 2, 1};
        assert((solution.singleNumber(nums) == 1));
    }

    {
        vector<int> nums = {4, 1, 2, 1, 2};
        assert((solution.singleNumber(nums) == 4));
    }

    {
        vector<int> nums = {1};
        assert((solution.singleNumber(nums) == 1));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
