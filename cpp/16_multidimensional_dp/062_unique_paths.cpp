/*
 * Problem: 62. 不同路径 / Unique Paths
 * Link: https://leetcode.cn/problems/unique-paths/
 * Chapter: 多维动态规划
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
    int uniquePaths(int m, int n) {
        // TODO: 在这里实现你的解法。
        (void)m;
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        int m = 3;
        int n = 7;
        assert((solution.uniquePaths(m, n) == 28));
    }

    {
        int m = 3;
        int n = 2;
        assert((solution.uniquePaths(m, n) == 3));
    }

    {
        // 官方示例 3
        assert(solution.uniquePaths(7, 3) == 28);
    }

    {
        // 官方示例 4
        assert(solution.uniquePaths(3, 3) == 6);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
