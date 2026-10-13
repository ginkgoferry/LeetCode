/*
 * Problem: 3965. 任务完成时间 I / Finish Time of Tasks I
 * Link: https://leetcode.cn/problems/finish-time-of-tasks-i/
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
    long long finishTime(int n, vector<vector<int>>& edges, vector<int>& baseTime) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)baseTime;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}, {1, 2}};
        vector<int> baseTime = {9, 5, 3};
        auto localResult = solution.finishTime(n, edges, baseTime);
        long long expected = 17LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}, {0, 2}};
        vector<int> baseTime = {4, 7, 6};
        auto localResult = solution.finishTime(n, edges, baseTime);
        long long expected = 12LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {2, 3}};
        vector<int> baseTime = {5, 8, 2, 1};
        auto localResult = solution.finishTime(n, edges, baseTime);
        long long expected = 18LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
