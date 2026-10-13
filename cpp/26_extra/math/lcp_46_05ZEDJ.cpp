/*
 * Problem: LCP 46. 志愿者调配 / 志愿者调配
 * Link: https://leetcode.cn/problems/05ZEDJ/
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
    vector<int> volunteerDeployment(vector<int>& finalCnt, long long totalNum, vector<vector<int>>& edges, vector<vector<int>>& plans) {
        // TODO: 在这里实现你的解法。
        (void)finalCnt;
        (void)totalNum;
        (void)edges;
        (void)plans;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> finalCnt = {1, 16};
        long long totalNum = 21LL;
        vector<vector<int>> edges = {{0, 1}, {1, 2}};
        vector<vector<int>> plans = {{2, 1}, {1, 0}, {3, 0}};
        auto localResult = solution.volunteerDeployment(finalCnt, totalNum, edges, plans);
        vector<int> expected = {5, 7, 9};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> finalCnt = {4, 13, 4, 3, 8};
        long long totalNum = 54LL;
        vector<vector<int>> edges = {{0, 3}, {1, 3}, {4, 3}, {2, 3}, {2, 5}};
        vector<vector<int>> plans = {{1, 1}, {3, 3}, {2, 5}, {1, 0}};
        auto localResult = solution.volunteerDeployment(finalCnt, totalNum, edges, plans);
        vector<int> expected = {10, 16, 9, 4, 7, 8};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
