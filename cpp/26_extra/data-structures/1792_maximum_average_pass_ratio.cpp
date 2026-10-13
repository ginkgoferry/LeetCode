/*
 * Problem: 1792. 最大平均通过率 / Maximum Average Pass Ratio
 * Link: https://leetcode.cn/problems/maximum-average-pass-ratio/
 * Chapter: 数据结构
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
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        // TODO: 在这里实现你的解法。
        (void)classes;
        (void)extraStudents;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> classes = {{1, 2}, {3, 5}, {2, 2}};
        int extraStudents = 2;
        auto localResult = solution.maxAverageRatio(classes, extraStudents);
        double expected = 0.78333;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        vector<vector<int>> classes = {{2, 4}, {3, 9}, {4, 5}, {2, 10}};
        int extraStudents = 4;
        auto localResult = solution.maxAverageRatio(classes, extraStudents);
        double expected = 0.53485;
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
