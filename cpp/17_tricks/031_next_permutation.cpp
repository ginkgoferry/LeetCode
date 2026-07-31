/*
 * Problem: 31. 下一个排列 / Next Permutation
 * Link: https://leetcode.cn/problems/next-permutation/
 * Chapter: 技巧
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
    void nextPermutation(vector<int>& nums) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {1, 2, 3};
        solution.nextPermutation(nums);
        assert((nums == vector<int>{1, 3, 2}));
    }

    {
        vector<int> nums = {3, 2, 1};
        solution.nextPermutation(nums);
        assert((nums == vector<int>{1, 2, 3}));
    }

    {
        vector<int> nums = {1, 1, 5};
        solution.nextPermutation(nums);
        assert((nums == vector<int>{1, 5, 1}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
