/*
 * Problem: 2244. 完成所有任务需要的最少轮数 / Minimum Rounds to Complete All Tasks
 * Link: https://leetcode.cn/problems/minimum-rounds-to-complete-all-tasks/
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
    int minimumRounds(vector<int>& tasks) {
        // TODO: 在这里实现你的解法。
        (void)tasks;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> tasks = {2, 2, 3, 3, 2, 4, 4, 4, 4, 4};
        auto localResult = solution.minimumRounds(tasks);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> tasks = {2, 3, 3};
        auto localResult = solution.minimumRounds(tasks);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
