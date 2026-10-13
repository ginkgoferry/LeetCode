/*
 * Problem: 2731. 移动机器人 / Movement of Robots
 * Link: https://leetcode.cn/problems/movement-of-robots/
 * Chapter: 贪心算法
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
    int sumDistance(vector<int>& nums, string s, int d) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)s;
        (void)d;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {-2, 0, 2};
        string s = "RLL";
        int d = 3;
        auto localResult = solution.sumDistance(nums, s, d);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 0};
        string s = "RL";
        int d = 2;
        auto localResult = solution.sumDistance(nums, s, d);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
