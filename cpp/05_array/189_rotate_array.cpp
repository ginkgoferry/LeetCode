/*
 * Problem: 189. 轮转数组 / Rotate Array
 * Link: https://leetcode.cn/problems/rotate-array/
 * Chapter: 普通数组
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
    void rotate(vector<int>& nums, int k) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
        int k = 3;
        solution.rotate(nums, k);
        assert((nums == vector<int>{5, 6, 7, 1, 2, 3, 4}));
    }

    {
        vector<int> nums = {-1, -100, 3, 99};
        int k = 2;
        solution.rotate(nums, k);
        assert((nums == vector<int>{3, 99, -1, -100}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
