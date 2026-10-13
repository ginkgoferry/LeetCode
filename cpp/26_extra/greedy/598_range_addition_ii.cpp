/*
 * Problem: 598. 区间加法 II / Range Addition II
 * Link: https://leetcode.cn/problems/range-addition-ii/
 * Chapter: 贪心算法
 * Difficulty: Easy
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
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        // TODO: 在这里实现你的解法。
        (void)m;
        (void)n;
        (void)ops;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int m = 3;
        int n = 3;
        vector<vector<int>> ops = {{2, 2}, {3, 3}};
        auto localResult = solution.maxCount(m, n, ops);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int m = 3;
        int n = 3;
        vector<vector<int>> ops = {{2, 2}, {3, 3}, {3, 3}, {3, 3}, {2, 2}, {3, 3}, {3, 3}, {3, 3}, {2, 2}, {3, 3}, {3, 3}, {3, 3}};
        auto localResult = solution.maxCount(m, n, ops);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int m = 3;
        int n = 3;
        vector<vector<int>> ops = {};
        auto localResult = solution.maxCount(m, n, ops);
        int expected = 9;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
