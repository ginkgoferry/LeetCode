/*
 * Problem: 1765. 地图中的最高点 / Map of Highest Peak
 * Link: https://leetcode.cn/problems/map-of-highest-peak/
 * Chapter: 网格图
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
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        // TODO: 在这里实现你的解法。
        (void)isWater;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> isWater = {{0, 1}, {0, 0}};
        const auto original = isWater;
        auto localResult = solution.highestPeak(isWater);
        assert(localResult.size() == original.size());
        int maximum = 0;
        for (size_t row = 0; row < original.size(); ++row) {
            assert(localResult[row].size() == original[row].size());
            for (size_t col = 0; col < original[row].size(); ++col) {
                assert(localResult[row][col] >= 0);
                if (original[row][col]) assert(localResult[row][col] == 0);
                if (row) assert(abs(localResult[row][col] - localResult[row-1][col]) <= 1);
                if (col) assert(abs(localResult[row][col] - localResult[row][col-1]) <= 1);
                maximum = max(maximum, localResult[row][col]);
            }
        }
        assert(maximum == 2);
    }

    {
        // 官方样例
        vector<vector<int>> isWater = {{0, 0, 1}, {1, 0, 0}, {0, 0, 0}};
        const auto original = isWater;
        auto localResult = solution.highestPeak(isWater);
        assert(localResult.size() == original.size());
        int maximum = 0;
        for (size_t row = 0; row < original.size(); ++row) {
            assert(localResult[row].size() == original[row].size());
            for (size_t col = 0; col < original[row].size(); ++col) {
                assert(localResult[row][col] >= 0);
                if (original[row][col]) assert(localResult[row][col] == 0);
                if (row) assert(abs(localResult[row][col] - localResult[row-1][col]) <= 1);
                if (col) assert(abs(localResult[row][col] - localResult[row][col-1]) <= 1);
                maximum = max(maximum, localResult[row][col]);
            }
        }
        assert(maximum == 2);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
