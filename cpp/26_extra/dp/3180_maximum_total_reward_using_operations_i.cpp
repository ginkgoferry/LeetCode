/*
 * Problem: 3180. 执行操作可获得的最大总奖励 I / Maximum Total Reward Using Operations I
 * Link: https://leetcode.cn/problems/maximum-total-reward-using-operations-i/
 * Chapter: 动态规划
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
    int maxTotalReward(vector<int>& rewardValues) {
        // TODO: 在这里实现你的解法。
        (void)rewardValues;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> rewardValues = {1, 1, 3, 3};
        auto localResult = solution.maxTotalReward(rewardValues);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> rewardValues = {1, 6, 4, 3, 2};
        auto localResult = solution.maxTotalReward(rewardValues);
        int expected = 11;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
