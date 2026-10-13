/*
 * Problem: 2585. 获得分数的方法数 / Number of Ways to Earn Points
 * Link: https://leetcode.cn/problems/number-of-ways-to-earn-points/
 * Chapter: 动态规划
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
    int waysToReachTarget(int target, vector<vector<int>>& types) {
        // TODO: 在这里实现你的解法。
        (void)target;
        (void)types;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int target = 6;
        vector<vector<int>> types = {{6, 1}, {3, 2}, {2, 3}};
        auto localResult = solution.waysToReachTarget(target, types);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int target = 5;
        vector<vector<int>> types = {{50, 1}, {50, 2}, {50, 5}};
        auto localResult = solution.waysToReachTarget(target, types);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int target = 18;
        vector<vector<int>> types = {{6, 1}, {3, 2}, {2, 3}};
        auto localResult = solution.waysToReachTarget(target, types);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
