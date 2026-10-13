/*
 * Problem: 1626. 无矛盾的最佳球队 / Best Team With No Conflicts
 * Link: https://leetcode.cn/problems/best-team-with-no-conflicts/
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
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        // TODO: 在这里实现你的解法。
        (void)scores;
        (void)ages;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> scores = {1, 3, 5, 10, 15};
        vector<int> ages = {1, 2, 3, 4, 5};
        auto localResult = solution.bestTeamScore(scores, ages);
        int expected = 34;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> scores = {4, 5, 6, 5};
        vector<int> ages = {2, 1, 2, 1};
        auto localResult = solution.bestTeamScore(scores, ages);
        int expected = 16;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> scores = {1, 2, 3, 5};
        vector<int> ages = {8, 9, 10, 1};
        auto localResult = solution.bestTeamScore(scores, ages);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
