/*
 * Problem: 283. 移动零 / Move Zeroes
 * Link: https://leetcode.cn/problems/move-zeroes/
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
    void moveZeroes(vector<int>& nums) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {0, 1, 0, 3, 12};
        solution.moveZeroes(nums);
        assert((nums == vector<int>{1, 3, 12, 0, 0}));
    }

    {
        vector<int> nums = {0};
        solution.moveZeroes(nums);
        assert((nums == vector<int>{0}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
