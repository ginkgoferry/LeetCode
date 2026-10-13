/*
 * Problem: 3538. 合并得到最小旅行时间 / Merge Operations for Minimum Travel Time
 * Link: https://leetcode.cn/problems/merge-operations-for-minimum-travel-time/
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
    int minTravelTime(int l, int n, int k, vector<int>& position, vector<int>& time) {
        // TODO: 在这里实现你的解法。
        (void)l;
        (void)n;
        (void)k;
        (void)position;
        (void)time;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int l = 10;
        int n = 4;
        int k = 1;
        vector<int> position = {0, 3, 8, 10};
        vector<int> time = {5, 8, 3, 6};
        auto localResult = solution.minTravelTime(l, n, k, position, time);
        int expected = 62;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int l = 5;
        int n = 5;
        int k = 1;
        vector<int> position = {0, 1, 2, 3, 5};
        vector<int> time = {8, 3, 9, 3, 3};
        auto localResult = solution.minTravelTime(l, n, k, position, time);
        int expected = 34;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
