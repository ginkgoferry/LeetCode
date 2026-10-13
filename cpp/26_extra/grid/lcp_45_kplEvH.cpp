/*
 * Problem: LCP 45. 自行车炫技赛场 / 自行车炫技赛场
 * Link: https://leetcode.cn/problems/kplEvH/
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
    vector<vector<int>> bicycleYard(vector<int>& position, vector<vector<int>>& terrain, vector<vector<int>>& obstacle) {
        // TODO: 在这里实现你的解法。
        (void)position;
        (void)terrain;
        (void)obstacle;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> position = {0, 0};
        vector<vector<int>> terrain = {{0, 0}, {0, 0}};
        vector<vector<int>> obstacle = {{0, 0}, {0, 0}};
        auto localResult = solution.bicycleYard(position, terrain, obstacle);
        vector<vector<int>> expected = {{0, 1}, {1, 0}, {1, 1}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> position = {1, 1};
        vector<vector<int>> terrain = {{5, 0}, {0, 6}};
        vector<vector<int>> obstacle = {{0, 6}, {7, 0}};
        auto localResult = solution.bicycleYard(position, terrain, obstacle);
        vector<vector<int>> expected = {{0, 1}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
