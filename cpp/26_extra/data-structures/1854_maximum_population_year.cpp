/*
 * Problem: 1854. 人口最多的年份 / Maximum Population Year
 * Link: https://leetcode.cn/problems/maximum-population-year/
 * Chapter: 数据结构
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
    int maximumPopulation(vector<vector<int>>& logs) {
        // TODO: 在这里实现你的解法。
        (void)logs;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> logs = {{1993, 1999}, {2000, 2010}};
        auto localResult = solution.maximumPopulation(logs);
        int expected = 1993;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> logs = {{1950, 1961}, {1960, 1971}, {1970, 1981}};
        auto localResult = solution.maximumPopulation(logs);
        int expected = 1960;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
