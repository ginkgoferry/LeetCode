/*
 * Problem: 1992. 找到所有的农场组 / Find All Groups of Farmland
 * Link: https://leetcode.cn/problems/find-all-groups-of-farmland/
 * Chapter: 贪心算法
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
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        // TODO: 在这里实现你的解法。
        (void)land;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> land = {{1, 0, 0}, {0, 1, 1}, {0, 1, 1}};
        auto localResult = solution.findFarmland(land);
        vector<vector<int>> expected = {{0, 0, 0, 0}, {1, 1, 2, 2}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> land = {{1, 1}, {1, 1}};
        auto localResult = solution.findFarmland(land);
        vector<vector<int>> expected = {{0, 0, 1, 1}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> land = {{0}};
        auto localResult = solution.findFarmland(land);
        vector<vector<int>> expected = {};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
