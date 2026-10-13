/*
 * Problem: LCP 57. 打地鼠 / 打地鼠
 * Link: https://leetcode.cn/problems/ZbAuEH/
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
    int getMaximumNumber(vector<vector<int>>& moles) {
        // TODO: 在这里实现你的解法。
        (void)moles;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> moles = {{1, 1, 0}, {2, 0, 1}, {4, 2, 2}};
        auto localResult = solution.getMaximumNumber(moles);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> moles = {{2, 0, 2}, {5, 2, 0}, {4, 1, 0}, {1, 2, 1}, {3, 0, 2}};
        auto localResult = solution.getMaximumNumber(moles);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> moles = {{0, 1, 0}, {0, 0, 1}};
        auto localResult = solution.getMaximumNumber(moles);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
