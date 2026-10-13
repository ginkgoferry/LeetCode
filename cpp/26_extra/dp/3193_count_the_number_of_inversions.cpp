/*
 * Problem: 3193. 统计逆序对的数目 / Count the Number of Inversions
 * Link: https://leetcode.cn/problems/count-the-number-of-inversions/
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
    int numberOfPermutations(int n, vector<vector<int>>& requirements) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)requirements;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> requirements = {{2, 2}, {0, 0}};
        auto localResult = solution.numberOfPermutations(n, requirements);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> requirements = {{2, 2}, {1, 1}, {0, 0}};
        auto localResult = solution.numberOfPermutations(n, requirements);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        vector<vector<int>> requirements = {{0, 0}, {1, 0}};
        auto localResult = solution.numberOfPermutations(n, requirements);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
