/*
 * Problem: 169. 多数元素 / Majority Element
 * Link: https://leetcode.cn/problems/majority-element/
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
    int majorityElement(vector<int>& nums) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {3, 2, 3};
        assert((solution.majorityElement(nums) == 3));
    }

    {
        vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
        assert((solution.majorityElement(nums) == 2));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
