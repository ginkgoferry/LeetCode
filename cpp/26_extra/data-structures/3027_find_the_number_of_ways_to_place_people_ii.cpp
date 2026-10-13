/*
 * Problem: 3027. 人员站位的方案数 II / Find the Number of Ways to Place People II
 * Link: https://leetcode.cn/problems/find-the-number-of-ways-to-place-people-ii/
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
    int numberOfPairs(vector<vector<int>>& points) {
        // TODO: 在这里实现你的解法。
        (void)points;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> points = {{1, 1}, {2, 2}, {3, 3}};
        auto localResult = solution.numberOfPairs(points);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> points = {{6, 2}, {4, 4}, {2, 6}};
        auto localResult = solution.numberOfPairs(points);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> points = {{3, 1}, {1, 3}, {1, 1}};
        auto localResult = solution.numberOfPairs(points);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
