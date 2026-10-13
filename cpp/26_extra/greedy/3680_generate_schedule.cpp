/*
 * Problem: 3680. 生成赛程 / Generate Schedule
 * Link: https://leetcode.cn/problems/generate-schedule/
 * Chapter: 数学
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
    vector<vector<int>> generateSchedule(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        auto localResult = solution.generateSchedule(n);
        assert(localResult.empty());
    }

    {
        // 官方样例
        int n = 5;
        auto localResult = solution.generateSchedule(n);
        assert(localResult.size() == static_cast<size_t>(n * (n - 1)));
        set<pair<int, int>> matches;
        for (size_t i = 0; i < localResult.size(); ++i) {
            const auto& match = localResult[i]; assert(match.size() == 2);
            int home = match[0], away = match[1];
            assert(home >= 0 && home < n && away >= 0 && away < n && home != away);
            assert(matches.insert({home, away}).second);
            if (i) for (int team : localResult[i-1]) assert(team != home && team != away);
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
