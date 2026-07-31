/*
 * Problem: 239. 滑动窗口最大值 / Sliding Window Maximum
 * Link: https://leetcode.cn/problems/sliding-window-maximum/
 * Chapter: 子串
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
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
        int k = 3;
        assert((solution.maxSlidingWindow(nums, k) == vector<int>{3, 3, 5, 5, 6, 7}));
    }

    {
        vector<int> nums = {1};
        int k = 1;
        assert((solution.maxSlidingWindow(nums, k) == vector<int>{1}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
