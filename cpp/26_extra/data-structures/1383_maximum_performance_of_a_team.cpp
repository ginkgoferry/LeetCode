/*
 * Problem: 1383. 最大的团队表现值 / Maximum Performance of a Team
 * Link: https://leetcode.cn/problems/maximum-performance-of-a-team/
 * Chapter: 数据结构
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
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)speed;
        (void)efficiency;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 6;
        vector<int> speed = {2, 10, 3, 1, 5, 8};
        vector<int> efficiency = {5, 4, 3, 9, 7, 2};
        int k = 2;
        auto localResult = solution.maxPerformance(n, speed, efficiency, k);
        int expected = 60;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 6;
        vector<int> speed = {2, 10, 3, 1, 5, 8};
        vector<int> efficiency = {5, 4, 3, 9, 7, 2};
        int k = 3;
        auto localResult = solution.maxPerformance(n, speed, efficiency, k);
        int expected = 68;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 6;
        vector<int> speed = {2, 10, 3, 1, 5, 8};
        vector<int> efficiency = {5, 4, 3, 9, 7, 2};
        int k = 4;
        auto localResult = solution.maxPerformance(n, speed, efficiency, k);
        int expected = 72;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
