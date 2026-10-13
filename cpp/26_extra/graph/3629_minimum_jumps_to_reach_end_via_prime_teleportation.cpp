/*
 * Problem: 3629. 通过质数传送到达终点的最少跳跃次数 / Minimum Jumps to Reach End via Prime Teleportation
 * Link: https://leetcode.cn/problems/minimum-jumps-to-reach-end-via-prime-teleportation/
 * Chapter: 图论
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
    int minJumps(vector<int>& nums) {
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
        vector<int> nums = {1, 2, 4, 6};
        auto localResult = solution.minJumps(nums);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 3, 4, 7, 9};
        auto localResult = solution.minJumps(nums);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 6, 5, 8};
        auto localResult = solution.minJumps(nums);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
