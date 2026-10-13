/*
 * Problem: 457. 环形数组是否存在循环 / Circular Array Loop
 * Link: https://leetcode.cn/problems/circular-array-loop/
 * Chapter: 树与回溯
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
    bool circularArrayLoop(vector<int>& nums) {
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
        vector<int> nums = {2, -1, 1, 2, 2};
        auto localResult = solution.circularArrayLoop(nums);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-1, -2, -3, -4, -5, 6};
        auto localResult = solution.circularArrayLoop(nums);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, -1, 5, 1, 4};
        auto localResult = solution.circularArrayLoop(nums);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
