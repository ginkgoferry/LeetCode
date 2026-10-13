/*
 * Problem: 1494. 并行课程 II / Parallel Courses II
 * Link: https://leetcode.cn/problems/parallel-courses-ii/
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
    int minNumberOfSemesters(int n, vector<vector<int>>& relations, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)relations;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> relations = {{2, 1}, {3, 1}, {1, 4}};
        int k = 2;
        auto localResult = solution.minNumberOfSemesters(n, relations, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> relations = {{2, 1}, {3, 1}, {4, 1}, {1, 5}};
        int k = 2;
        auto localResult = solution.minNumberOfSemesters(n, relations, k);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 11;
        vector<vector<int>> relations = {};
        int k = 2;
        auto localResult = solution.minNumberOfSemesters(n, relations, k);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
